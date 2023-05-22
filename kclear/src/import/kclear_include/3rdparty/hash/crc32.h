#ifndef CRC32_INC_
#define CRC32_INC_

//////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C" {
#endif

unsigned int crc32(unsigned int CRC, const void *pvBuf, unsigned int nLen);

#ifdef __cplusplus
};
#endif

//////////////////////////////////////////////////////////////////////////

#endif  // CRC32_INC_
