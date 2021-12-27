/*
 * YangCMeta.h
 *
 *  Created on: 2021年12月26日
 *      Author: yang
 */

#ifndef INCLUDE_YANGAVUTIL_VIDEO_YANGCMETA_H_
#define INCLUDE_YANGAVUTIL_VIDEO_YANGCMETA_H_

#include <stdint.h>
//#include <string>
#include <yangutil/yangavtype.h>
void yang_createH264Meta(struct YangVideoMeta* pvmd,struct YangFrame *videoFrame);
void yang_createH265Meta(struct YangVideoMeta* pvmd,struct YangFrame *videoFrame);
void yang_getConfig_Flv_H264(struct YangH2645Conf *p_264, uint8_t *configBuf,int32_t *p_configLen);
void yang_getConfig_Meta_H264(struct YangSample* sps, struct YangSample* pps,uint8_t *configBuf,int32_t *p_configLen);
void yang_getConfig_Flv_H265(struct YangH2645Conf *p_264, uint8_t *configBuf,int32_t *p_configLen);
void yang_getConfig_Meta_H265(struct YangSample* vps,struct YangSample* sps,struct  YangSample* pps, uint8_t *configBuf,int32_t *p_configLen);

void yang_getH265RtmpHeader(uint8_t *meta, uint8_t *src, int32_t *hLen);
void yang_getH264RtmpHeader(uint8_t *buf, uint8_t *src, int32_t *hLen);

void yang_decodeMetaH264(uint8_t *configBuf,int32_t p_configLen,struct YangSample* sps,struct YangSample* pps);
void yang_decodeMetaH265(uint8_t *configBuf,int32_t p_configLen,struct YangSample* vps,struct YangSample* sps,struct YangSample* pps);




#endif /* INCLUDE_YANGAVUTIL_VIDEO_YANGCMETA_H_ */