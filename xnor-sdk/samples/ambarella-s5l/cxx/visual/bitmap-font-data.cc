#include "bitmap-font.h"

#include <cstdint>

namespace xnor_sample {
constexpr GlyphMetrics kDigit0Metrics = {
  17.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kDigit0Bits[] = {
  0xf0, 0x03, 0xf8, 0x07, 0xfc, 0x0f, 0x1e, 0x1e, 0x1e, 0x1e, 0x0f,
  0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c,
  0x0f, 0x3c, 0x0f, 0x3c, 0x1e, 0x1e, 0x1e, 0x1e, 0xfc, 0x0f, 0xf8,
  0x07, 0xf0, 0x03
};
constexpr GlyphMetrics kDigit1Metrics = {
  17.0, 0, -18, 12, 18, 2
};
constexpr std::uint8_t kDigit1Bits[] = {
  0xfc, 0x00, 0xff, 0x00, 0xff, 0x00, 0xf3, 0x00, 0xf0, 0x00, 0xf0,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00,
  0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xff, 0x0f, 0xff,
  0x0f, 0xff, 0x0f
};
constexpr GlyphMetrics kDigit2Metrics = {
  17.0, 0, -18, 13, 18, 2
};
constexpr std::uint8_t kDigit2Bits[] = {
  0xfc, 0x01, 0xff, 0x07, 0xff, 0x0f, 0x07, 0x1f, 0x01, 0x1e, 0x00,
  0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1f, 0x80, 0x0f, 0xe0, 0x07,
  0xf0, 0x03, 0xf8, 0x01, 0xfc, 0x00, 0x7e, 0x00, 0xff, 0x1f, 0xff,
  0x1f, 0xff, 0x1f
};
constexpr GlyphMetrics kDigit3Metrics = {
  17.0, 0, -18, 13, 18, 2
};
constexpr std::uint8_t kDigit3Bits[] = {
  0xf8, 0x03, 0xfe, 0x0f, 0xfe, 0x1f, 0x02, 0x1f, 0x00, 0x1e, 0x00,
  0x1e, 0x00, 0x0f, 0xf8, 0x07, 0xf8, 0x07, 0xf8, 0x0f, 0x00, 0x1f,
  0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x03, 0x1f, 0xff, 0x0f, 0xff,
  0x07, 0xfc, 0x01
};
constexpr GlyphMetrics kDigit4Metrics = {
  17.0, 0, -18, 15, 18, 2
};
constexpr std::uint8_t kDigit4Bits[] = {
  0x80, 0x0f, 0xc0, 0x0f, 0xe0, 0x0f, 0xe0, 0x0f, 0xf0, 0x0f, 0x78,
  0x0f, 0x38, 0x0f, 0x3c, 0x0f, 0x1c, 0x0f, 0x1e, 0x0f, 0x0f, 0x0f,
  0x07, 0x0f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x0f
};
constexpr GlyphMetrics kDigit5Metrics = {
  17.0, 0, -18, 13, 18, 2
};
constexpr std::uint8_t kDigit5Bits[] = {
  0xfe, 0x0f, 0xfe, 0x0f, 0xfe, 0x0f, 0x1e, 0x00, 0x1e, 0x00, 0x1e,
  0x00, 0xfe, 0x03, 0xfe, 0x07, 0xfe, 0x0f, 0x02, 0x1f, 0x00, 0x1e,
  0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x03, 0x1f, 0xff, 0x0f, 0xff,
  0x07, 0xfc, 0x01
};
constexpr GlyphMetrics kDigit6Metrics = {
  17.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kDigit6Bits[] = {
  0xe0, 0x0f, 0xf8, 0x1f, 0xfc, 0x1f, 0x3e, 0x10, 0x1e, 0x00, 0x0e,
  0x00, 0xef, 0x07, 0xff, 0x0f, 0xff, 0x1f, 0x1f, 0x3e, 0x0f, 0x3c,
  0x0f, 0x3c, 0x0f, 0x3c, 0x0e, 0x3c, 0x1e, 0x1e, 0xfc, 0x1f, 0xf8,
  0x0f, 0xf0, 0x03
};
constexpr GlyphMetrics kDigit7Metrics = {
  17.0, 0, -18, 13, 18, 2
};
constexpr std::uint8_t kDigit7Bits[] = {
  0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0x00, 0x1f, 0x00, 0x0f, 0x80,
  0x0f, 0x80, 0x07, 0xc0, 0x07, 0xc0, 0x03, 0xc0, 0x03, 0xe0, 0x03,
  0xe0, 0x01, 0xf0, 0x01, 0xf0, 0x00, 0xf8, 0x00, 0x78, 0x00, 0x78,
  0x00, 0x7c, 0x00
};
constexpr GlyphMetrics kDigit8Metrics = {
  17.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kDigit8Bits[] = {
  0xf8, 0x07, 0xfe, 0x1f, 0xff, 0x3f, 0x1f, 0x3e, 0x0f, 0x3c, 0x0f,
  0x3c, 0x1e, 0x3e, 0xfe, 0x1f, 0xf8, 0x07, 0xfe, 0x1f, 0x1e, 0x1e,
  0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x1f, 0x3e, 0xfe, 0x1f, 0xfc,
  0x0f, 0xf8, 0x07
};
constexpr GlyphMetrics kDigit9Metrics = {
  17.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kDigit9Bits[] = {
  0xf0, 0x03, 0xfc, 0x07, 0xfe, 0x0f, 0x1e, 0x1e, 0x0f, 0x1c, 0x0f,
  0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x1f, 0x3e, 0xfe, 0x3f, 0xfc, 0x3f,
  0xf8, 0x3d, 0x00, 0x1c, 0x00, 0x1e, 0x02, 0x1f, 0xfe, 0x0f, 0xfe,
  0x07, 0xfc, 0x01
};
constexpr GlyphMetrics kLowerAMetrics = {
  16.0, 0, -13, 13, 13, 2
};
constexpr std::uint8_t kLowerABits[] = {
  0xf8, 0x03, 0xfe, 0x0f, 0xfe, 0x0f, 0x02, 0x1f, 0x00, 0x1e, 0xf8,
  0x1f, 0xfe, 0x1f, 0xff, 0x1f, 0x0f, 0x1e, 0x0f, 0x1f, 0xff, 0x1f,
  0xfe, 0x1f, 0x7c, 0x1e
};
constexpr GlyphMetrics kLowerBMetrics = {
  17.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kLowerBBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xcf,
  0x07, 0xff, 0x0f, 0xff, 0x1f, 0x1f, 0x1e, 0x0f, 0x3c, 0x0f, 0x3c,
  0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x1f, 0x1e, 0xff, 0x1f, 0xff,
  0x0f, 0xcf, 0x07
};
constexpr GlyphMetrics kLowerCMetrics = {
  14.0, 0, -13, 12, 13, 2
};
constexpr std::uint8_t kLowerCBits[] = {
  0xf0, 0x07, 0xfc, 0x0f, 0xfe, 0x0f, 0x3e, 0x08, 0x1f, 0x00, 0x0f,
  0x00, 0x0f, 0x00, 0x0f, 0x00, 0x1f, 0x00, 0x3e, 0x08, 0xfe, 0x0f,
  0xfc, 0x0f, 0xf0, 0x07
};
constexpr GlyphMetrics kLowerDMetrics = {
  17.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kLowerDBits[] = {
  0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0xf8,
  0x3c, 0xfc, 0x3f, 0xfe, 0x3f, 0x1e, 0x3e, 0x0f, 0x3c, 0x0f, 0x3c,
  0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x1e, 0x3e, 0xfe, 0x3f, 0xfc,
  0x3f, 0xf8, 0x3c
};
constexpr GlyphMetrics kLowerEMetrics = {
  16.0, 0, -13, 14, 13, 2
};
constexpr std::uint8_t kLowerEBits[] = {
  0xf0, 0x03, 0xfc, 0x0f, 0xfe, 0x1f, 0x1e, 0x1e, 0x0f, 0x3c, 0xff,
  0x3f, 0xff, 0x3f, 0xff, 0x3f, 0x0f, 0x00, 0x1e, 0x18, 0xfe, 0x1f,
  0xfc, 0x1f, 0xf0, 0x07
};
constexpr GlyphMetrics kLowerFMetrics = {
  10.0, 0, -18, 10, 18, 2
};
constexpr std::uint8_t kLowerFBits[] = {
  0xf0, 0x03, 0xf8, 0x03, 0xfc, 0x03, 0x3c, 0x00, 0x3c, 0x00, 0xff,
  0x03, 0xff, 0x03, 0xff, 0x03, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00,
  0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c,
  0x00, 0x3c, 0x00
};
constexpr GlyphMetrics kLowerGMetrics = {
  17.0, 0, -13, 14, 18, 2
};
constexpr std::uint8_t kLowerGBits[] = {
  0xf8, 0x3c, 0xfc, 0x3f, 0xfe, 0x3f, 0x1e, 0x3e, 0x0f, 0x3c, 0x0f,
  0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x1e, 0x3e, 0xfe, 0x3f,
  0xfc, 0x3f, 0xf8, 0x3c, 0x00, 0x3c, 0x04, 0x3e, 0xfc, 0x1f, 0xfc,
  0x0f, 0xf8, 0x03
};
constexpr GlyphMetrics kLowerHMetrics = {
  17.0, 0, -18, 13, 18, 2
};
constexpr std::uint8_t kLowerHBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xcf,
  0x07, 0xff, 0x0f, 0xff, 0x1f, 0x1f, 0x1f, 0x0f, 0x1e, 0x0f, 0x1e,
  0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f,
  0x1e, 0x0f, 0x1e
};
constexpr GlyphMetrics kLowerIMetrics = {
  8.0, 0, -18, 4, 18, 2
};
constexpr std::uint8_t kLowerIBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f,
  0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kLowerJMetrics = {
  8.0, 0, -18, 7, 23, 2
};
constexpr std::uint8_t kLowerJBits[] = {
  0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x00, 0x00, 0x78,
  0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00,
  0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78,
  0x00, 0x78, 0x00, 0x78, 0x00, 0x7c, 0x00, 0x3f, 0x00, 0x3f, 0x00,
  0x1f, 0x00
};
constexpr GlyphMetrics kLowerKMetrics = {
  16.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kLowerKBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x1f, 0x8f, 0x0f, 0xcf, 0x07, 0xef, 0x03, 0xff, 0x01, 0xff, 0x00,
  0xff, 0x00, 0xff, 0x01, 0xef, 0x03, 0xcf, 0x07, 0x8f, 0x0f, 0x0f,
  0x1f, 0x0f, 0x3e
};
constexpr GlyphMetrics kLowerLMetrics = {
  8.0, 0, -18, 4, 18, 2
};
constexpr std::uint8_t kLowerLBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kLowerMMetrics = {
  25.0, 0, -13, 20, 13, 4
};
constexpr std::uint8_t kLowerMBits[] = {
  0xcf, 0xc3, 0x03, 0x00, 0xff, 0xf7, 0x07, 0x00, 0xff, 0xff, 0x0f,
  0x00, 0x1f, 0x1f, 0x0f, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x0f, 0x0f,
  0x0f, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x0f,
  0x0f, 0x0f, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x0f, 0x0f, 0x0f, 0x00,
  0x0f, 0x0f, 0x0f, 0x00, 0x0f, 0x0f, 0x0f, 0x00
};
constexpr GlyphMetrics kLowerNMetrics = {
  17.0, 0, -13, 13, 13, 2
};
constexpr std::uint8_t kLowerNBits[] = {
  0xcf, 0x07, 0xff, 0x0f, 0xff, 0x1f, 0x1f, 0x1f, 0x0f, 0x1e, 0x0f,
  0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e,
  0x0f, 0x1e, 0x0f, 0x1e
};
constexpr GlyphMetrics kLowerOMetrics = {
  16.0, 0, -13, 14, 13, 2
};
constexpr std::uint8_t kLowerOBits[] = {
  0xf0, 0x03, 0xfc, 0x0f, 0xfe, 0x1f, 0x1e, 0x1e, 0x0f, 0x3c, 0x0f,
  0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x1e, 0x1e, 0xfe, 0x1f,
  0xfc, 0x0f, 0xf0, 0x03
};
constexpr GlyphMetrics kLowerPMetrics = {
  17.0, 0, -13, 14, 18, 2
};
constexpr std::uint8_t kLowerPBits[] = {
  0xcf, 0x07, 0xff, 0x0f, 0xff, 0x1f, 0x1f, 0x1e, 0x0f, 0x3c, 0x0f,
  0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x1f, 0x1e, 0xff, 0x1f,
  0xff, 0x0f, 0xcf, 0x07, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kLowerQMetrics = {
  17.0, 0, -13, 14, 18, 2
};
constexpr std::uint8_t kLowerQBits[] = {
  0xf8, 0x3c, 0xfc, 0x3f, 0xfe, 0x3f, 0x1e, 0x3e, 0x0f, 0x3c, 0x0f,
  0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x1e, 0x3e, 0xfe, 0x3f,
  0xfc, 0x3f, 0xf8, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00,
  0x3c, 0x00, 0x3c
};
constexpr GlyphMetrics kLowerRMetrics = {
  12.0, 0, -13, 10, 13, 2
};
constexpr std::uint8_t kLowerRBits[] = {
  0xcf, 0x03, 0xff, 0x03, 0xff, 0x03, 0x3f, 0x02, 0x1f, 0x00, 0x0f,
  0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kLowerSMetrics = {
  14.0, 0, -13, 12, 13, 2
};
constexpr std::uint8_t kLowerSBits[] = {
  0xfc, 0x01, 0xfe, 0x07, 0xff, 0x07, 0x0f, 0x06, 0x1f, 0x00, 0xff,
  0x03, 0xfe, 0x07, 0xf0, 0x0f, 0x00, 0x0f, 0x03, 0x0f, 0xff, 0x0f,
  0xff, 0x07, 0xfc, 0x01
};
constexpr GlyphMetrics kLowerTMetrics = {
  11.0, 0, -17, 10, 17, 2
};
constexpr std::uint8_t kLowerTBits[] = {
  0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0xff, 0x03, 0xff,
  0x03, 0xff, 0x03, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00,
  0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0xfc, 0x03, 0xf8, 0x03, 0xf0,
  0x03
};
constexpr GlyphMetrics kLowerUMetrics = {
  17.0, 0, -13, 13, 13, 2
};
constexpr std::uint8_t kLowerUBits[] = {
  0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f,
  0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x0f, 0x1e, 0x1f, 0x1f, 0xff, 0x1f,
  0xfe, 0x1f, 0x7c, 0x1e
};
constexpr GlyphMetrics kLowerVMetrics = {
  16.0, 0, -13, 15, 13, 2
};
constexpr std::uint8_t kLowerVBits[] = {
  0x0f, 0x78, 0x1e, 0x3c, 0x1e, 0x3c, 0x1e, 0x3c, 0x3c, 0x1e, 0x3c,
  0x1e, 0x38, 0x0e, 0x78, 0x0f, 0x78, 0x0f, 0x70, 0x07, 0xf0, 0x07,
  0xe0, 0x03, 0xe0, 0x03
};
constexpr GlyphMetrics kLowerWMetrics = {
  22.0, 0, -13, 21, 13, 4
};
constexpr std::uint8_t kLowerWBits[] = {
  0x0f, 0x0e, 0x1e, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x1e, 0x1f, 0x0f,
  0x00, 0x1e, 0x1f, 0x0f, 0x00, 0x1e, 0x1f, 0x0f, 0x00, 0xbe, 0xbb,
  0x0f, 0x00, 0xbc, 0xbb, 0x07, 0x00, 0xbc, 0xbb, 0x07, 0x00, 0xbc,
  0xbb, 0x07, 0x00, 0xf8, 0xf1, 0x03, 0x00, 0xf8, 0xf1, 0x03, 0x00,
  0xf8, 0xf1, 0x03, 0x00, 0xf8, 0xf1, 0x03, 0x00
};
constexpr GlyphMetrics kLowerXMetrics = {
  15.0, 0, -13, 15, 13, 2
};
constexpr std::uint8_t kLowerXBits[] = {
  0x1f, 0x7c, 0x3e, 0x3e, 0x7c, 0x1f, 0x78, 0x0f, 0xf0, 0x07, 0xf0,
  0x07, 0xe0, 0x03, 0xf0, 0x07, 0xf0, 0x07, 0x78, 0x0f, 0x3c, 0x1e,
  0x3e, 0x3e, 0x1f, 0x7c
};
constexpr GlyphMetrics kLowerYMetrics = {
  16.0, 0, -13, 15, 18, 2
};
constexpr std::uint8_t kLowerYBits[] = {
  0x1f, 0x7c, 0x1e, 0x3c, 0x1e, 0x3c, 0x3c, 0x3e, 0x3c, 0x1e, 0x7c,
  0x1f, 0x78, 0x0f, 0xf8, 0x0f, 0xf0, 0x0f, 0xf0, 0x07, 0xe0, 0x07,
  0xe0, 0x03, 0xe0, 0x03, 0xe0, 0x03, 0xe0, 0x01, 0xfc, 0x01, 0xfc,
  0x00, 0x7c, 0x00
};
constexpr GlyphMetrics kLowerZMetrics = {
  14.0, 0, -13, 12, 13, 2
};
constexpr std::uint8_t kLowerZBits[] = {
  0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xc0, 0x07, 0xe0, 0x07, 0xf0,
  0x03, 0xf8, 0x01, 0xfc, 0x00, 0x7e, 0x00, 0x3e, 0x00, 0xff, 0x0f,
  0xff, 0x0f, 0xff, 0x0f
};
constexpr GlyphMetrics kUpperAMetrics = {
  19.0, 0, -18, 18, 18, 4
};
constexpr std::uint8_t kUpperABits[] = {
  0xc0, 0x0f, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0xe0, 0x1f, 0x00,
  0x00, 0xe0, 0x1f, 0x00, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0xf0, 0x3f,
  0x00, 0x00, 0xf0, 0x3c, 0x00, 0x00, 0xf0, 0x3c, 0x00, 0x00, 0xf8,
  0x7c, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00,
  0x7c, 0xf8, 0x00, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xfc, 0xff, 0x00,
  0x00, 0xfe, 0xff, 0x01, 0x00, 0x1e, 0xe0, 0x01, 0x00, 0x1e, 0xe0,
  0x01, 0x00, 0x0f, 0xc0, 0x03, 0x00
};
constexpr GlyphMetrics kUpperBMetrics = {
  18.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kUpperBBits[] = {
  0xff, 0x03, 0xff, 0x0f, 0xff, 0x1f, 0x0f, 0x1f, 0x0f, 0x1e, 0x0f,
  0x1e, 0x0f, 0x1f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x1f, 0x0f, 0x3e,
  0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3c, 0x0f, 0x3e, 0xff, 0x1f, 0xff,
  0x1f, 0xff, 0x07
};
constexpr GlyphMetrics kUpperCMetrics = {
  18.0, 0, -18, 15, 18, 2
};
constexpr std::uint8_t kUpperCBits[] = {
  0xc0, 0x1f, 0xf0, 0x7f, 0xfc, 0x7f, 0x7c, 0x70, 0x3e, 0x40, 0x1e,
  0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x1e, 0x00, 0x3e, 0x40, 0x7c, 0x70, 0xfc, 0x7f, 0xf0,
  0x7f, 0xc0, 0x1f
};
constexpr GlyphMetrics kUpperDMetrics = {
  20.0, 0, -18, 16, 18, 2
};
constexpr std::uint8_t kUpperDBits[] = {
  0xff, 0x03, 0xff, 0x0f, 0xff, 0x1f, 0x0f, 0x3e, 0x0f, 0x7c, 0x0f,
  0x78, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0,
  0x0f, 0xf0, 0x0f, 0x78, 0x0f, 0x7c, 0x0f, 0x3e, 0xff, 0x3f, 0xff,
  0x0f, 0xff, 0x03
};
constexpr GlyphMetrics kUpperEMetrics = {
  16.0, 0, -18, 12, 18, 2
};
constexpr std::uint8_t kUpperEBits[] = {
  0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00, 0xff, 0x07, 0xff, 0x07, 0xff, 0x07, 0x0f, 0x00,
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xff, 0x0f, 0xff,
  0x0f, 0xff, 0x0f
};
constexpr GlyphMetrics kUpperFMetrics = {
  16.0, 0, -18, 12, 18, 2
};
constexpr std::uint8_t kUpperFBits[] = {
  0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0x0f, 0x00,
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kUpperGMetrics = {
  20.0, 0, -18, 17, 18, 4
};
constexpr std::uint8_t kUpperGBits[] = {
  0xc0, 0x3f, 0x00, 0x00, 0xf0, 0xff, 0x00, 0x00, 0xfc, 0xff, 0x00,
  0x00, 0x7c, 0xe0, 0x00, 0x00, 0x3e, 0x80, 0x00, 0x00, 0x1e, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f,
  0xfc, 0x01, 0x00, 0x0f, 0xfc, 0x01, 0x00, 0x0f, 0xfc, 0x01, 0x00,
  0x0f, 0xe0, 0x01, 0x00, 0x1e, 0xe0, 0x01, 0x00, 0x3e, 0xe0, 0x01,
  0x00, 0x7c, 0xe0, 0x01, 0x00, 0xf8, 0xff, 0x01, 0x00, 0xf0, 0xff,
  0x01, 0x00, 0xc0, 0x3f, 0x00, 0x00
};
constexpr GlyphMetrics kUpperHMetrics = {
  20.0, 0, -18, 16, 18, 2
};
constexpr std::uint8_t kUpperHBits[] = {
  0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f,
  0xf0, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0,
  0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f,
  0xf0, 0x0f, 0xf0
};
constexpr GlyphMetrics kUpperIMetrics = {
  9.0, 0, -18, 4, 18, 2
};
constexpr std::uint8_t kUpperIBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kUpperJMetrics = {
  9.0, 0, -18, 8, 23, 2
};
constexpr std::uint8_t kUpperJBits[] = {
  0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00,
  0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf8, 0x00, 0x7f, 0x00, 0x3f, 0x00,
  0x0f, 0x00
};
constexpr GlyphMetrics kUpperKMetrics = {
  19.0, 0, -18, 17, 18, 4
};
constexpr std::uint8_t kUpperKBits[] = {
  0x0f, 0xfc, 0x00, 0x00, 0x0f, 0x7e, 0x00, 0x00, 0x0f, 0x1f, 0x00,
  0x00, 0x8f, 0x0f, 0x00, 0x00, 0xcf, 0x07, 0x00, 0x00, 0xef, 0x03,
  0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x7f,
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00,
  0xef, 0x03, 0x00, 0x00, 0xcf, 0x07, 0x00, 0x00, 0x8f, 0x0f, 0x00,
  0x00, 0x0f, 0x1f, 0x00, 0x00, 0x0f, 0x3e, 0x00, 0x00, 0x0f, 0x7c,
  0x00, 0x00, 0x0f, 0xf8, 0x01, 0x00
};
constexpr GlyphMetrics kUpperLMetrics = {
  15.0, 0, -18, 12, 18, 2
};
constexpr std::uint8_t kUpperLBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xff, 0x0f, 0xff,
  0x0f, 0xff, 0x0f
};
constexpr GlyphMetrics kUpperMMetrics = {
  24.0, 0, -18, 19, 18, 4
};
constexpr std::uint8_t kUpperMBits[] = {
  0x1f, 0xc0, 0x07, 0x00, 0x3f, 0xe0, 0x07, 0x00, 0x3f, 0xe0, 0x07,
  0x00, 0x7f, 0xf0, 0x07, 0x00, 0x7f, 0xf0, 0x07, 0x00, 0x7f, 0xf0,
  0x07, 0x00, 0xef, 0xb8, 0x07, 0x00, 0xef, 0xb8, 0x07, 0x00, 0xef,
  0xbd, 0x07, 0x00, 0xcf, 0x9d, 0x07, 0x00, 0xcf, 0x9d, 0x07, 0x00,
  0x8f, 0x8f, 0x07, 0x00, 0x8f, 0x8f, 0x07, 0x00, 0x8f, 0x8f, 0x07,
  0x00, 0x0f, 0x87, 0x07, 0x00, 0x0f, 0x80, 0x07, 0x00, 0x0f, 0x80,
  0x07, 0x00, 0x0f, 0x80, 0x07, 0x00
};
constexpr GlyphMetrics kUpperNMetrics = {
  20.0, 0, -18, 16, 18, 2
};
constexpr std::uint8_t kUpperNBits[] = {
  0x1f, 0xf0, 0x3f, 0xf0, 0x3f, 0xf0, 0x7f, 0xf0, 0x7f, 0xf0, 0xff,
  0xf0, 0xef, 0xf0, 0xef, 0xf1, 0xcf, 0xf1, 0x8f, 0xf3, 0x8f, 0xf3,
  0x0f, 0xf7, 0x0f, 0xf7, 0x0f, 0xfe, 0x0f, 0xfe, 0x0f, 0xfc, 0x0f,
  0xfc, 0x0f, 0xf8
};
constexpr GlyphMetrics kUpperOMetrics = {
  20.0, 0, -18, 18, 18, 4
};
constexpr std::uint8_t kUpperOBits[] = {
  0xc0, 0x0f, 0x00, 0x00, 0xf8, 0x3f, 0x00, 0x00, 0xfc, 0xff, 0x00,
  0x00, 0x7e, 0xf8, 0x00, 0x00, 0x1e, 0xe0, 0x01, 0x00, 0x1e, 0xe0,
  0x01, 0x00, 0x0f, 0xc0, 0x03, 0x00, 0x0f, 0xc0, 0x03, 0x00, 0x0f,
  0xc0, 0x03, 0x00, 0x0f, 0xc0, 0x03, 0x00, 0x0f, 0xc0, 0x03, 0x00,
  0x0f, 0xc0, 0x03, 0x00, 0x1e, 0xe0, 0x01, 0x00, 0x1e, 0xe0, 0x01,
  0x00, 0x7e, 0xf8, 0x01, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xf8, 0x7f,
  0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00
};
constexpr GlyphMetrics kUpperPMetrics = {
  18.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kUpperPBits[] = {
  0xff, 0x07, 0xff, 0x0f, 0xff, 0x1f, 0x0f, 0x3e, 0x0f, 0x3c, 0x0f,
  0x3c, 0x0f, 0x3c, 0x0f, 0x3e, 0xff, 0x1f, 0xff, 0x0f, 0xff, 0x07,
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kUpperQMetrics = {
  20.0, 0, -18, 18, 22, 4
};
constexpr std::uint8_t kUpperQBits[] = {
  0xc0, 0x0f, 0x00, 0x00, 0xf8, 0x7f, 0x00, 0x00, 0xfc, 0xff, 0x00,
  0x00, 0x7e, 0xf8, 0x01, 0x00, 0x1e, 0xe0, 0x01, 0x00, 0x1e, 0xe0,
  0x01, 0x00, 0x0f, 0xc0, 0x03, 0x00, 0x0f, 0xc0, 0x03, 0x00, 0x0f,
  0xc0, 0x03, 0x00, 0x0f, 0xc0, 0x03, 0x00, 0x0f, 0xc0, 0x03, 0x00,
  0x0f, 0xc0, 0x03, 0x00, 0x1e, 0xe0, 0x03, 0x00, 0x1e, 0xe0, 0x01,
  0x00, 0x7e, 0xf8, 0x01, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xf8, 0x7f,
  0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
  0x78, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00
};
constexpr GlyphMetrics kUpperRMetrics = {
  18.0, 0, -18, 16, 18, 2
};
constexpr std::uint8_t kUpperRBits[] = {
  0xff, 0x07, 0xff, 0x1f, 0xff, 0x1f, 0x0f, 0x3e, 0x0f, 0x3c, 0x0f,
  0x3c, 0x0f, 0x3c, 0x0f, 0x1e, 0xff, 0x1f, 0xff, 0x07, 0xff, 0x0f,
  0x0f, 0x1f, 0x0f, 0x3e, 0x0f, 0x3c, 0x0f, 0x7c, 0x0f, 0x78, 0x0f,
  0x78, 0x0f, 0xf8
};
constexpr GlyphMetrics kUpperSMetrics = {
  17.0, 0, -18, 14, 18, 2
};
constexpr std::uint8_t kUpperSBits[] = {
  0xf8, 0x0f, 0xfc, 0x1f, 0xfe, 0x1f, 0x1f, 0x1c, 0x0f, 0x10, 0x0f,
  0x00, 0x1f, 0x00, 0xff, 0x01, 0xfe, 0x0f, 0xfc, 0x1f, 0xe0, 0x3f,
  0x00, 0x3e, 0x00, 0x3c, 0x01, 0x3c, 0x07, 0x3e, 0xff, 0x1f, 0xff,
  0x0f, 0xfc, 0x03
};
constexpr GlyphMetrics kUpperTMetrics = {
  16.0, 0, -18, 16, 18, 2
};
constexpr std::uint8_t kUpperTBits[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xc0, 0x03, 0xc0,
  0x03, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03,
  0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0xc0,
  0x03, 0xc0, 0x03
};
constexpr GlyphMetrics kUpperUMetrics = {
  19.0, 0, -18, 15, 18, 2
};
constexpr std::uint8_t kUpperUBits[] = {
  0x0f, 0x78, 0x0f, 0x78, 0x0f, 0x78, 0x0f, 0x78, 0x0f, 0x78, 0x0f,
  0x78, 0x0f, 0x78, 0x0f, 0x78, 0x0f, 0x78, 0x0f, 0x78, 0x0f, 0x78,
  0x0f, 0x78, 0x0f, 0x78, 0x0f, 0x78, 0x1e, 0x3c, 0xfe, 0x3f, 0xfc,
  0x1f, 0xf0, 0x07
};
constexpr GlyphMetrics kUpperVMetrics = {
  19.0, 0, -18, 18, 18, 4
};
constexpr std::uint8_t kUpperVBits[] = {
  0x0f, 0xc0, 0x03, 0x00, 0x1e, 0xe0, 0x01, 0x00, 0x1e, 0xe0, 0x01,
  0x00, 0x1e, 0xe0, 0x01, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x3c, 0xf0,
  0x00, 0x00, 0x7c, 0xf8, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x78,
  0x78, 0x00, 0x00, 0xf8, 0x7c, 0x00, 0x00, 0xf0, 0x3c, 0x00, 0x00,
  0xf0, 0x3c, 0x00, 0x00, 0xf0, 0x3f, 0x00, 0x00, 0xe0, 0x1f, 0x00,
  0x00, 0xe0, 0x1f, 0x00, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0xc0, 0x0f,
  0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00
};
constexpr GlyphMetrics kUpperWMetrics = {
  26.0, 0, -18, 25, 18, 4
};
constexpr std::uint8_t kUpperWBits[] = {
  0x0f, 0x7c, 0xe0, 0x01, 0x0f, 0x7c, 0xe0, 0x01, 0x1e, 0x7c, 0xf0,
  0x00, 0x1e, 0x7c, 0xf0, 0x00, 0x1e, 0xee, 0xf0, 0x00, 0x1e, 0xee,
  0xf0, 0x00, 0x3c, 0xee, 0xf8, 0x00, 0x3c, 0xee, 0x78, 0x00, 0x3c,
  0xc7, 0x79, 0x00, 0x3c, 0xc7, 0x79, 0x00, 0x7c, 0xc7, 0x7d, 0x00,
  0x78, 0xc7, 0x3d, 0x00, 0xf8, 0xc7, 0x3f, 0x00, 0xf8, 0x83, 0x3f,
  0x00, 0xf8, 0x83, 0x3f, 0x00, 0xf0, 0x83, 0x1f, 0x00, 0xf0, 0x83,
  0x1f, 0x00, 0xf0, 0x01, 0x1f, 0x00
};
constexpr GlyphMetrics kUpperXMetrics = {
  19.0, 0, -18, 18, 18, 4
};
constexpr std::uint8_t kUpperXBits[] = {
  0x1f, 0xe0, 0x03, 0x00, 0x3e, 0xf0, 0x01, 0x00, 0x7c, 0xf8, 0x00,
  0x00, 0x7c, 0xf8, 0x00, 0x00, 0xf8, 0x7c, 0x00, 0x00, 0xf0, 0x3f,
  0x00, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0xc0,
  0x0f, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0xe0, 0x1f, 0x00, 0x00,
  0xf0, 0x3f, 0x00, 0x00, 0xf0, 0x3c, 0x00, 0x00, 0xf8, 0x7c, 0x00,
  0x00, 0x7c, 0xf8, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x3e, 0xf0,
  0x01, 0x00, 0x1f, 0xe0, 0x03, 0x00
};
constexpr GlyphMetrics kUpperYMetrics = {
  17.0, 0, -18, 18, 18, 4
};
constexpr std::uint8_t kUpperYBits[] = {
  0x1f, 0xe0, 0x03, 0x00, 0x3e, 0xf0, 0x01, 0x00, 0x3c, 0xf8, 0x00,
  0x00, 0x7c, 0xf8, 0x00, 0x00, 0xf8, 0x7c, 0x00, 0x00, 0xf0, 0x3e,
  0x00, 0x00, 0xf0, 0x3f, 0x00, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0xc0,
  0x0f, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00,
  0x80, 0x07, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x80, 0x07, 0x00,
  0x00, 0x80, 0x07, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x80, 0x07,
  0x00, 0x00, 0x80, 0x07, 0x00, 0x00
};
constexpr GlyphMetrics kUpperZMetrics = {
  17.0, 0, -18, 15, 18, 2
};
constexpr std::uint8_t kUpperZBits[] = {
  0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0x00, 0x7e, 0x00, 0x3e, 0x00,
  0x1f, 0x80, 0x0f, 0xc0, 0x07, 0xe0, 0x03, 0xe0, 0x03, 0xf0, 0x01,
  0xf8, 0x00, 0x7c, 0x00, 0x3e, 0x00, 0x3f, 0x00, 0xff, 0x7f, 0xff,
  0x7f, 0xff, 0x7f
};
constexpr GlyphMetrics kPoundMetrics = {
  20.0, 0, -18, 17, 18, 4
};
constexpr std::uint8_t kPoundBits[] = {
  0xc0, 0x71, 0x00, 0x00, 0xc0, 0x71, 0x00, 0x00, 0xc0, 0x31, 0x00,
  0x00, 0xc0, 0x38, 0x00, 0x00, 0xe0, 0x38, 0x00, 0x00, 0xfe, 0xff,
  0x01, 0x00, 0xfe, 0xff, 0x01, 0x00, 0xfe, 0xff, 0x01, 0x00, 0x60,
  0x1c, 0x00, 0x00, 0x70, 0x1c, 0x00, 0x00, 0x70, 0x0c, 0x00, 0x00,
  0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x00, 0x38, 0x0e, 0x00, 0x00, 0x38, 0x06, 0x00, 0x00, 0x18, 0x07,
  0x00, 0x00, 0x1c, 0x07, 0x00, 0x00
};
constexpr GlyphMetrics kSpaceMetrics = {
  8.0, 0, 0, 0, 0, 0
};
constexpr std::uint8_t kSpaceBits[] = {
  0x00
};
constexpr GlyphMetrics kSingleQuoteMetrics = {
  7.0, 0, -18, 3, 7, 2
};
constexpr std::uint8_t kSingleQuoteBits[] = {
  0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07,
  0x00, 0x07, 0x00
};
constexpr GlyphMetrics kSemicolonMetrics = {
  10.0, 0, -13, 5, 16, 2
};
constexpr std::uint8_t kSemicolonBits[] = {
  0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00,
  0x1e, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x0f, 0x00, 0x07, 0x00
};
constexpr GlyphMetrics kSlashMetrics = {
  9.0, 0, -18, 9, 20, 2
};
constexpr std::uint8_t kSlashBits[] = {
  0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x60,
  0x00, 0x70, 0x00, 0x70, 0x00, 0x30, 0x00, 0x38, 0x00, 0x38, 0x00,
  0x18, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x0c, 0x00, 0x0e, 0x00, 0x0e,
  0x00, 0x06, 0x00, 0x07, 0x00, 0x07, 0x00
};
constexpr GlyphMetrics kColonMetrics = {
  10.0, 0, -13, 4, 13, 2
};
constexpr std::uint8_t kColonBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kPercentMetrics = {
  24.0, 0, -18, 23, 18, 4
};
constexpr std::uint8_t kPercentBits[] = {
  0x7c, 0x00, 0x03, 0x00, 0xfe, 0x80, 0x01, 0x00, 0xef, 0xc1, 0x01,
  0x00, 0xc7, 0xc1, 0x00, 0x00, 0xc7, 0x61, 0x00, 0x00, 0xc7, 0x71,
  0x00, 0x00, 0xc7, 0x31, 0x00, 0x00, 0xef, 0x39, 0x00, 0x00, 0xfe,
  0x18, 0x1f, 0x00, 0x7c, 0x8c, 0x3f, 0x00, 0x00, 0xce, 0x7b, 0x00,
  0x00, 0xc6, 0x71, 0x00, 0x00, 0xc7, 0x71, 0x00, 0x80, 0xc3, 0x71,
  0x00, 0x80, 0xc1, 0x71, 0x00, 0xc0, 0xc1, 0x7b, 0x00, 0xc0, 0x80,
  0x3f, 0x00, 0x60, 0x00, 0x1f, 0x00
};
constexpr GlyphMetrics kDashMetrics = {
  10.0, 0, -9, 7, 3, 2
};
constexpr std::uint8_t kDashBits[] = {
  0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00
};
constexpr GlyphMetrics kExclamationMetrics = {
  11.0, 0, -18, 4, 18, 2
};
constexpr std::uint8_t kExclamationBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kPeriodMetrics = {
  9.0, 0, -5, 4, 5, 2
};
constexpr std::uint8_t kPeriodBits[] = {
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00
};
constexpr GlyphMetrics kDoubleQuoteMetrics = {
  13.0, 0, -18, 8, 7, 2
};
constexpr std::uint8_t kDoubleQuoteBits[] = {
  0xe7, 0x00, 0xe7, 0x00, 0xe7, 0x00, 0xe7, 0x00, 0xe7, 0x00, 0xe7,
  0x00, 0xe7, 0x00
};
constexpr GlyphMetrics kEqualsMetrics = {
  20.0, 0, -12, 15, 9, 2
};
constexpr std::uint8_t kEqualsBits[] = {
  0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f
};
constexpr GlyphMetrics kQuestionMetrics = {
  14.0, 0, -18, 11, 18, 2
};
constexpr std::uint8_t kQuestionBits[] = {
  0xff, 0x00, 0xff, 0x03, 0xff, 0x07, 0xc3, 0x07, 0x80, 0x07, 0x80,
  0x07, 0xc0, 0x03, 0xf0, 0x03, 0xf8, 0x00, 0x7c, 0x00, 0x3c, 0x00,
  0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c,
  0x00, 0x3c, 0x00
};
const std::uint8_t* kCharacterBitmap[] = {
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  kSpaceBits,
  kExclamationBits,
  kDoubleQuoteBits,
  kPoundBits,
  nullptr,
  kPercentBits,
  nullptr,
  kSingleQuoteBits,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  kDashBits,
  kPeriodBits,
  kSlashBits,
  kDigit0Bits,
  kDigit1Bits,
  kDigit2Bits,
  kDigit3Bits,
  kDigit4Bits,
  kDigit5Bits,
  kDigit6Bits,
  kDigit7Bits,
  kDigit8Bits,
  kDigit9Bits,
  kColonBits,
  kSemicolonBits,
  nullptr,
  kEqualsBits,
  nullptr,
  kQuestionBits,
  nullptr,
  kUpperABits,
  kUpperBBits,
  kUpperCBits,
  kUpperDBits,
  kUpperEBits,
  kUpperFBits,
  kUpperGBits,
  kUpperHBits,
  kUpperIBits,
  kUpperJBits,
  kUpperKBits,
  kUpperLBits,
  kUpperMBits,
  kUpperNBits,
  kUpperOBits,
  kUpperPBits,
  kUpperQBits,
  kUpperRBits,
  kUpperSBits,
  kUpperTBits,
  kUpperUBits,
  kUpperVBits,
  kUpperWBits,
  kUpperXBits,
  kUpperYBits,
  kUpperZBits,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  kLowerABits,
  kLowerBBits,
  kLowerCBits,
  kLowerDBits,
  kLowerEBits,
  kLowerFBits,
  kLowerGBits,
  kLowerHBits,
  kLowerIBits,
  kLowerJBits,
  kLowerKBits,
  kLowerLBits,
  kLowerMBits,
  kLowerNBits,
  kLowerOBits,
  kLowerPBits,
  kLowerQBits,
  kLowerRBits,
  kLowerSBits,
  kLowerTBits,
  kLowerUBits,
  kLowerVBits,
  kLowerWBits,
  kLowerXBits,
  kLowerYBits,
  kLowerZBits
};
const GlyphMetrics* kCharacterMetrics[] = {
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  &kSpaceMetrics,
  &kExclamationMetrics,
  &kDoubleQuoteMetrics,
  &kPoundMetrics,
  nullptr,
  &kPercentMetrics,
  nullptr,
  &kSingleQuoteMetrics,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  &kDashMetrics,
  &kPeriodMetrics,
  &kSlashMetrics,
  &kDigit0Metrics,
  &kDigit1Metrics,
  &kDigit2Metrics,
  &kDigit3Metrics,
  &kDigit4Metrics,
  &kDigit5Metrics,
  &kDigit6Metrics,
  &kDigit7Metrics,
  &kDigit8Metrics,
  &kDigit9Metrics,
  &kColonMetrics,
  &kSemicolonMetrics,
  nullptr,
  &kEqualsMetrics,
  nullptr,
  &kQuestionMetrics,
  nullptr,
  &kUpperAMetrics,
  &kUpperBMetrics,
  &kUpperCMetrics,
  &kUpperDMetrics,
  &kUpperEMetrics,
  &kUpperFMetrics,
  &kUpperGMetrics,
  &kUpperHMetrics,
  &kUpperIMetrics,
  &kUpperJMetrics,
  &kUpperKMetrics,
  &kUpperLMetrics,
  &kUpperMMetrics,
  &kUpperNMetrics,
  &kUpperOMetrics,
  &kUpperPMetrics,
  &kUpperQMetrics,
  &kUpperRMetrics,
  &kUpperSMetrics,
  &kUpperTMetrics,
  &kUpperUMetrics,
  &kUpperVMetrics,
  &kUpperWMetrics,
  &kUpperXMetrics,
  &kUpperYMetrics,
  &kUpperZMetrics,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  nullptr,
  &kLowerAMetrics,
  &kLowerBMetrics,
  &kLowerCMetrics,
  &kLowerDMetrics,
  &kLowerEMetrics,
  &kLowerFMetrics,
  &kLowerGMetrics,
  &kLowerHMetrics,
  &kLowerIMetrics,
  &kLowerJMetrics,
  &kLowerKMetrics,
  &kLowerLMetrics,
  &kLowerMMetrics,
  &kLowerNMetrics,
  &kLowerOMetrics,
  &kLowerPMetrics,
  &kLowerQMetrics,
  &kLowerRMetrics,
  &kLowerSMetrics,
  &kLowerTMetrics,
  &kLowerUMetrics,
  &kLowerVMetrics,
  &kLowerWMetrics,
  &kLowerXMetrics,
  &kLowerYMetrics,
  &kLowerZMetrics
};
} // namespace xnor_sample
