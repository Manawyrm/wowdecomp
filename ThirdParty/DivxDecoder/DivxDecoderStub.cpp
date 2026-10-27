// ARM64 has neither the original 32-bit DivxDecoder.dll nor an ARM64 build of xvidcore, so movies are disabled there:
// InitializeDivxDecoder fails and CSimpleMovieFrame skips the movie.

#include "ThirdParty/DivxDecoder/DivxDecoder.h"

int32_t DivxDecode(int32_t decoder, DivxDecodeFrame* frame, int32_t flags) {
    return 1;
}

int32_t InitializeDivxDecoder(int32_t decoder, int32_t width, int32_t height) {
    return 1;
}

int32_t SetOutputFormat(int32_t decoder, int32_t format, int32_t width, int32_t height) {
    return 1;
}

int32_t UnInitializeDivxDecoder(int32_t decoder) {
    return 1;
}
