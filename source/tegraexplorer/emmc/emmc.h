#pragma once
#include "../../utils/types.h"
#include "../../utils/list.h"

typedef struct _pkg1_info {
    short ver;
    char id[16];
} pkg1_info;

//int mount_emmc_partition(const char *part, int logicnumb);
int dump_biskeys();
void print_biskeys();
pkg1_info returnpkg1info();

int mount_mmc(const char *partition, const int biskeynumb);
void connect_mmc(short mmctype);
void disconnect_mmc();
int connect_part(const char *partition);
void dumpEmuGpt();
link_t *selectGpt(short mmcType);
int checkGptRules(char *in);

static const u8 zeros[0x10] = {0};

static const u8 keyblob_key_source[0x10] = {
    0xDF, 0x20, 0x6F, 0x59, 0x44, 0x54, 0xEF, 0xDC, 0x70, 0x74, 0x48, 0x3B, 0x0D, 0xED, 0x9F, 0xD3};

//======================================Keys======================================//
// from Package1 -> Secure_Monitor
static const u8 aes_kek_generation_source[0x10] = {
    0x4D, 0x87, 0x09, 0x86, 0xC4, 0x5D, 0x20, 0x72, 0x2F, 0xBA, 0x10, 0x53, 0xDA, 0x92, 0xE8, 0xA9};
static const u8 retail_specific_aes_key_source[0x10] = {
    0xE2, 0xD6, 0xB8, 0x7A, 0x11, 0x9C, 0xB8, 0x80, 0xE8, 0x22, 0x88, 0x8A, 0x46, 0xFB, 0xA1, 0x95};

// from Package1ldr (or Secure_Monitor on 6.2.0)
static const u8 per_console_key_source[0x10] = {
    0x4F, 0x02, 0x5F, 0x0E, 0xB6, 0x6D, 0x11, 0x0E, 0xDC, 0x32, 0x7D, 0x41, 0x86, 0xC2, 0xF4, 0x78};

// from SPL
static const u8 aes_key_generation_source[0x10] = {
    0x89, 0x61, 0x5E, 0xE0, 0x5C, 0x31, 0xB6, 0x80, 0x5F, 0xE5, 0x8F, 0x3D, 0xA2, 0x4F, 0x7A, 0xA8};

// from FS
static const u8 bis_kek_source[0x10] = {
    0x34, 0xC1, 0xA0, 0xC4, 0x82, 0x58, 0xF8, 0xB4, 0xFA, 0x9E, 0x5E, 0x6A, 0xDA, 0xFC, 0x7E, 0x4F};
static const u8 bis_key_source[3][0x20] = {
    {
        0xF8, 0x3F, 0x38, 0x6E, 0x2C, 0xD2, 0xCA, 0x32, 0xA8, 0x9A, 0xB9, 0xAA, 0x29, 0xBF, 0xC7, 0x48,
        0x7D, 0x92, 0xB0, 0x3A, 0xA8, 0xBF, 0xDE, 0xE1, 0xA7, 0x4C, 0x3B, 0x6E, 0x35, 0xCB, 0x71, 0x06},
    {
        0x41, 0x00, 0x30, 0x49, 0xDD, 0xCC, 0xC0, 0x65, 0x64, 0x7A, 0x7E, 0xB4, 0x1E, 0xED, 0x9C, 0x5F,
        0x44, 0x42, 0x4E, 0xDA, 0xB4, 0x9D, 0xFC, 0xD9, 0x87, 0x77, 0x24, 0x9A, 0xDC, 0x9F, 0x7C, 0xA4},
    {
        0x52, 0xC2, 0xE9, 0xEB, 0x09, 0xE3, 0xEE, 0x29, 0x32, 0xA1, 0x0C, 0x1F, 0xB6, 0xA0, 0x92, 0x6C,
        0x4D, 0x12, 0xE1, 0x4B, 0x2A, 0x47, 0x4C, 0x1C, 0x09, 0xCB, 0x03, 0x59, 0xF0, 0x15, 0xF4, 0xE4}
};

/*
enum mmc_types {
    SYSMMC = 0,
    EMUMMC
};
*/