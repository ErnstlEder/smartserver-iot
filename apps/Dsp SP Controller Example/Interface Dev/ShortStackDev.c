/*
 * THIS FILE IS MACHINE-GENERATED. DO NOT EDIT.
 *
 * Content generated by Echelon IzoT Interface Interpreter 1.10.07 at 10-Aug-2019 16:22
 * Copyright (c) Echelon Corporation 2014-2015
 *
 * Target: Echelon IzoT ShortStack (SS430_FT6050_SYS20000kHz)
 *
 * Use of this code is subject to your compliance with the terms of the
 * Echelon IzoT(tm) ShortStack License Agreement which is
 * available at www.echelon.com
 */
#include <string.h>
#include "ShortStackDev.h"
#include "ShortStackApi.h"

/*
 * Message tag initialization
 */
static void tags_init(void) {
}   // tags_init

/* end Message tag initialization */

/*
 * Property files
 */
static void property_files_init(void) {
}   // property_files_init

/* end Property files */

/*
 * Device datapoint initialization
 */
static void device_datapoints_init(void) {
}   // device_datapoints_init

/* end Device datapoint initialization */

/*
 * Device property initialization
 */
static void device_properties_init(void) {
}   // device_properties_init

/* end Device property initialization */

/*
 * Block initialization
 */
static SCPTductStaticPressureSetpoint DspCntl__cpDefaultDspSP;
static SCPTdelayTime DspCntl__cpDelay;
static SCPTmeasurementInterval DspCntl__cpLoopInterval;
static SCPTmaxDuctStaticPressureSetpoint DspCntl__cpMaxDspSP;
static SCPTminDuctStaticPressureSetpoint DspCntl__cpMinDspSP;

static void blocks_init(void) {
   memset(&DspCntl, 0, sizeof(DspCntl));
   DspCntl.global_index = 0;
   DspCntl.nviAddRouge.global_index = 0;
   DspCntl.nviEnable.global_index = 1;
   DspCntl.nviRemoveRouge.global_index = 2;
   DspCntl.nviShowRouge.global_index = 3;
   DspCntl.nvoAvgDemand.global_index = 4;
   DspCntl.nvoDspSP.global_index = 5;
   DspCntl.nvoMaxDemand.global_index = 6;
   DspCntl.nvoMinDemand.global_index = 7;
   DspCntl.nvoRougeCount.global_index = 8;
   DspCntl.nvoRougeReport.global_index = 9;
   DspCntl.cpDefaultDspSP = &DspCntl__cpDefaultDspSP;
   {
      const LonByte init[] = {1, 244};
      memcpy(&DspCntl__cpDefaultDspSP, init, sizeof(init));
   }
   DspCntl.cpDelay = &DspCntl__cpDelay;
   {
      const LonByte init[] = {3, 132};
      memcpy(&DspCntl__cpDelay, init, sizeof(init));
   }
   DspCntl.cpLoopInterval = &DspCntl__cpLoopInterval;
   {
      const LonByte init[] = {0, 150};
      memcpy(&DspCntl__cpLoopInterval, init, sizeof(init));
   }
   DspCntl.cpMaxDspSP = &DspCntl__cpMaxDspSP;
   {
      const LonByte init[] = {2, 235};
      memcpy(&DspCntl__cpMaxDspSP, init, sizeof(init));
   }
   DspCntl.cpMinDspSP = &DspCntl__cpMinDspSP;
   {
      const LonByte init[] = {0, 249};
      memcpy(&DspCntl__cpMinDspSP, init, sizeof(init));
   }
}   // blocks_init

/* end Block initialization */

/*
 * Datapoint table
 */
#define DVPTR(item) (void* const)&(item.data)   /* produces an NV value pointer */
#define PVPTR(item) (void* const)&item          /* produces a property value pointer */

static const LonNvDescription nvTable[] = {
   {DVPTR(DspCntl.nviAddRouge), 31, 0x00},
   {DVPTR(DspCntl.nviEnable), 2, 0x00},
   {DVPTR(DspCntl.nviRemoveRouge), 31, 0x00},
   {DVPTR(DspCntl.nviShowRouge), 2, 0x00},
   {DVPTR(DspCntl.nvoAvgDemand), 2, 0x80},
   {DVPTR(DspCntl.nvoDspSP), 2, 0x80},
   {DVPTR(DspCntl.nvoMaxDemand), 2, 0x80},
   {DVPTR(DspCntl.nvoMinDemand), 2, 0x80},
   {DVPTR(DspCntl.nvoRougeCount), 2, 0x80},
   {DVPTR(DspCntl.nvoRougeReport), 31, 0x80},
   {PVPTR(DspCntl__cpDefaultDspSP), 2, 0x40},
   {PVPTR(DspCntl__cpDelay), 2, 0x40},
   {PVPTR(DspCntl__cpLoopInterval), 2, 0x40},
   {PVPTR(DspCntl__cpMaxDspSP), 2, 0x40},
   {PVPTR(DspCntl__cpMinDspSP), 2, 0x40},
};
/* end Datapoint table */

/*
 * Self-identification data
 */
static const LonByte siData[] =
{
   0x01, 0x76, 0x0F, 0x01, 0x00, 0x00, 0x8E, 0x24,
   0x8E, 0x5F, 0x8E, 0x24, 0x8E, 0x08, 0x8E, 0x51,
   0x8E, 0x71, 0x8E, 0x51, 0x8E, 0x51, 0x8E, 0x08,
   0x8E, 0x00, 0x8F, 0x71, 0x8F, 0x6B, 0x8F, 0x6B,
   0x8F, 0x71, 0x8F, 0x71, 0x26, 0x33, 0x2E, 0x34,
   0x40, 0x32, 0x30, 0x30, 0x30, 0x34, 0x53, 0x70,
   0x43, 0x6F, 0x6E, 0x74, 0x72, 0x6F, 0x6C, 0x6C,
   0x65, 0x72, 0x00, 0x30, 0x6E, 0x76, 0x69, 0x41,
   0x64, 0x64, 0x52, 0x6F, 0x75, 0x67, 0x65, 0x00,
   0x40, 0x30, 0x7C, 0x37, 0x00, 0x30, 0x6E, 0x76,
   0x69, 0x45, 0x6E, 0x61, 0x62, 0x6C, 0x65, 0x00,
   0x40, 0x30, 0x7C, 0x31, 0x00, 0x30, 0x6E, 0x76,
   0x69, 0x52, 0x65, 0x6D, 0x6F, 0x76, 0x65, 0x52,
   0x6F, 0x75, 0x67, 0x65, 0x00, 0x40, 0x30, 0x7C,
   0x38, 0x00, 0x30, 0x6E, 0x76, 0x69, 0x53, 0x68,
   0x6F, 0x77, 0x52, 0x6F, 0x75, 0x67, 0x65, 0x00,
   0x40, 0x30, 0x7C, 0x39, 0x00, 0x30, 0x6E, 0x76,
   0x6F, 0x41, 0x76, 0x67, 0x44, 0x65, 0x6D, 0x61,
   0x6E, 0x64, 0x00, 0x40, 0x30, 0x7C, 0x35, 0x00,
   0x30, 0x6E, 0x76, 0x6F, 0x44, 0x73, 0x70, 0x53,
   0x50, 0x00, 0x40, 0x30, 0x7C, 0x32, 0x00, 0x30,
   0x6E, 0x76, 0x6F, 0x4D, 0x61, 0x78, 0x44, 0x65,
   0x6D, 0x61, 0x6E, 0x64, 0x00, 0x40, 0x30, 0x7C,
   0x33, 0x00, 0x30, 0x6E, 0x76, 0x6F, 0x4D, 0x69,
   0x6E, 0x44, 0x65, 0x6D, 0x61, 0x6E, 0x64, 0x00,
   0x40, 0x30, 0x7C, 0x34, 0x00, 0x30, 0x6E, 0x76,
   0x6F, 0x52, 0x6F, 0x75, 0x67, 0x65, 0x43, 0x6F,
   0x75, 0x6E, 0x74, 0x00, 0x40, 0x30, 0x7C, 0x36,
   0x00, 0x30, 0x6E, 0x76, 0x6F, 0x52, 0x6F, 0x75,
   0x67, 0x65, 0x52, 0x65, 0x70, 0x6F, 0x72, 0x74,
   0x00, 0x40, 0x30, 0x7C, 0x31, 0x30, 0x00, 0x30,
   0x63, 0x70, 0x44, 0x65, 0x66, 0x61, 0x75, 0x6C,
   0x74, 0x44, 0x73, 0x70, 0x53, 0x50, 0x00, 0x26,
   0x31, 0x2C, 0x30, 0x2C, 0x30, 0x80, 0x2C, 0x31,
   0x38, 0x39, 0x00, 0x30, 0x63, 0x70, 0x44, 0x65,
   0x6C, 0x61, 0x79, 0x00, 0x26, 0x31, 0x2C, 0x30,
   0x2C, 0x30, 0x80, 0x2C, 0x39, 0x36, 0x00, 0x30,
   0x63, 0x70, 0x4C, 0x6F, 0x6F, 0x70, 0x49, 0x6E,
   0x74, 0x65, 0x72, 0x76, 0x61, 0x6C, 0x00, 0x26,
   0x31, 0x2C, 0x30, 0x2C, 0x30, 0x80, 0x2C, 0x33,
   0x36, 0x30, 0x00, 0x30, 0x63, 0x70, 0x4D, 0x61,
   0x78, 0x44, 0x73, 0x70, 0x53, 0x50, 0x00, 0x26,
   0x31, 0x2C, 0x30, 0x2C, 0x30, 0x80, 0x2C, 0x31,
   0x39, 0x30, 0x00, 0x30, 0x63, 0x70, 0x4D, 0x69,
   0x6E, 0x44, 0x73, 0x70, 0x53, 0x50, 0x00, 0x26,
   0x31, 0x2C, 0x30, 0x2C, 0x30, 0x80, 0x2C, 0x31,
   0x39, 0x31, 0x00, 0xFF, 0x00, 0x7F
};

/*
 * Application initialization data
 *
 * The Micro Server uses a 16 bit signature while IzoT Interface Interpreter
 * supports a stronger 32-bit signature. The initialialization
 * data below uses a 16-bit signature derived from the 32 bit
 * version by folding the higher 16 bits into the lower 16 bits
 * with an exclusive-or combination.
 */
static const LonByte appInitData[] =
{
   /* Folded signature */
   0xB8, 0x2A,
   /* Program Id */
   0x90, 0x00, 0x01, 0x06, 0x00, 0x03, 0x85, 0x00,
   /* Communication parameters */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   LON_USE_DEFAULT_COMMPARAMS | LON_EXPLICIT_ADDRESSING | LON_SERVICE_PIN_TIMER,
   LON_NV_COUNT,
   /* NV registration data */
   0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40,
   0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00
};

/*
 * onUpdate event dispatcher
 */
void LonNvUpdateOccurred(
   const unsigned index,
   const LonReceiveAddress* const pSourceAddress
) {
}
/* end onUpdate event dispatcher */

/*
 * onComplete event dispatcher
 */
void LonNvUpdateCompleted(
   const unsigned index,
   const LonBool success
) {
}
/* end onComplete event dispatcher */

/*
 * IzotGetCurrentDatapointSize event handler
 */
const unsigned LonGetCurrentNvSize(const unsigned index) {
   unsigned result = (unsigned)nvTable[index].DeclaredSize;
   return result;
}
/* end IzotGetCurrentDatapointSize event handler */

/*
 * onOnline event dispatcher
 */
void LonOnline(void) {
}
/* end onOnline event dispatcher */

/*
 * onOffline event dispatcher
 */
void LonOffline(void) {
}
/* end onOffline event dispatcher */

/*
 * onReset event dispatcher
 */
void LonResetOccurred(const LonResetNotification* const pResetNotification) {
}
/* end onReset event dispatcher */

/*
 * onService event dispatcher
 */
static void onService_dispatcher(LonBool held) {
}

void LonServicePinPressed(void) {
   onService_dispatcher(FALSE);
}

void LonServicePinHeld(void) {
   onService_dispatcher(TRUE);
}

/* end onService event dispatcher */

/*
 * onWink event dispatcher
 */
void LonWink(void) {
}
/* end onWink event dispatcher */

const LonByte* LonGetSiData(unsigned* pLength) {
   *pLength = (unsigned)sizeof(siData);
   return siData;
}

const LonByte* LonGetAppInitData(void) {
   return appInitData;
}

void* LonGetNvTable(void) {
   return (void*)nvTable;
}

unsigned LonGetNvCount(void) {
   return LON_NV_COUNT;
}

unsigned LonGetMtCount(void) {
   return LON_MT_COUNT;
}

LonUbits32 LonGetSignature(void) {
   return (LonUbits32)LON_APP_SIGNATURE;
}

void LonFrameworkInit(void) {
   /* called by LonInit */
   tags_init();
   device_datapoints_init();
   device_properties_init();
   property_files_init();
   blocks_init();
}

void* LonGetFile(int fileIndex, unsigned* pSize) {
    void* result = NULL;
    return result;
}

