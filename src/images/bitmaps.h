
#pragma once



namespace fabgl {


const uint8_t infoBitmap_data[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const Bitmap infoBitmap = Bitmap(16, 16, &infoBitmap_data[0]);



const uint8_t errorBitmap_data[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00,
  0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00,
  0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00,
  0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00,
  0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00,
  0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00,
  0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00,
  0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const Bitmap errorBitmap = Bitmap(16, 16, &errorBitmap_data[0]);



const uint8_t questionBitmap_data[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0x00, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00,
  0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xff, 0xff, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const Bitmap questionBitmap = Bitmap(16, 16, &questionBitmap_data[0]);



const uint8_t warnBitmap_data[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0xcf, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0xcf, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xcf, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xcf, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xcf, 0xcf, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xcf, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xcf, 0xcf, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xcf, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0x00, 0x00,
  0x00, 0x00, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0x00, 0x00,
  0x00, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0x00,
  0x00, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const Bitmap warnBitmap = Bitmap(16, 16, &warnBitmap_data[0]);



}