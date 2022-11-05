/****************************************************************************
** Meta object code from reading C++ file 'mpvobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/mpvobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpvobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MpvObject_t {
    QByteArrayData data[184];
    char stringdata0[2663];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpvObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpvObject_t qt_meta_stringdata_MpvObject = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MpvObject"
QT_MOC_LITERAL(1, 10, 17), // "idleActiveChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 12), // "mutedChanged"
QT_MOC_LITERAL(5, 48, 13), // "pausedChanged"
QT_MOC_LITERAL(6, 62, 21), // "pausedForCacheChanged"
QT_MOC_LITERAL(7, 84, 15), // "seekableChanged"
QT_MOC_LITERAL(8, 100, 14), // "chapterChanged"
QT_MOC_LITERAL(9, 115, 23), // "chapterListCountChanged"
QT_MOC_LITERAL(10, 139, 28), // "decoderFrameDropCountChanged"
QT_MOC_LITERAL(11, 168, 14), // "dheightChanged"
QT_MOC_LITERAL(12, 183, 13), // "dwidthChanged"
QT_MOC_LITERAL(13, 197, 26), // "estimatedFrameCountChanged"
QT_MOC_LITERAL(14, 224, 27), // "estimatedFrameNumberChanged"
QT_MOC_LITERAL(15, 252, 21), // "frameDropCountChanged"
QT_MOC_LITERAL(16, 274, 18), // "playlistPosChanged"
QT_MOC_LITERAL(17, 293, 20), // "playlistCountChanged"
QT_MOC_LITERAL(18, 314, 26), // "voDelayedFrameCountChanged"
QT_MOC_LITERAL(19, 341, 13), // "volumeChanged"
QT_MOC_LITERAL(20, 355, 15), // "contrastChanged"
QT_MOC_LITERAL(21, 371, 17), // "brightnessChanged"
QT_MOC_LITERAL(22, 389, 12), // "gammaChanged"
QT_MOC_LITERAL(23, 402, 17), // "saturationChanged"
QT_MOC_LITERAL(24, 420, 17), // "subMarginYChanged"
QT_MOC_LITERAL(25, 438, 10), // "vidChanged"
QT_MOC_LITERAL(26, 449, 10), // "aidChanged"
QT_MOC_LITERAL(27, 460, 10), // "sidChanged"
QT_MOC_LITERAL(28, 471, 30), // "audioParamsChannelCountChanged"
QT_MOC_LITERAL(29, 502, 28), // "audioParamsSampleRateChanged"
QT_MOC_LITERAL(30, 531, 21), // "trackListCountChanged"
QT_MOC_LITERAL(31, 553, 19), // "audioBitrateChanged"
QT_MOC_LITERAL(32, 573, 13), // "avsyncChanged"
QT_MOC_LITERAL(33, 587, 19), // "containerFpsChanged"
QT_MOC_LITERAL(34, 607, 27), // "demuxerCacheDurationChanged"
QT_MOC_LITERAL(35, 635, 17), // "displayFpsChanged"
QT_MOC_LITERAL(36, 653, 26), // "estimatedDisplayFpsChanged"
QT_MOC_LITERAL(37, 680, 21), // "estimatedVfFpsChanged"
QT_MOC_LITERAL(38, 702, 10), // "fpsChanged"
QT_MOC_LITERAL(39, 713, 12), // "speedChanged"
QT_MOC_LITERAL(40, 726, 19), // "videoBitrateChanged"
QT_MOC_LITERAL(41, 746, 24), // "videoParamsAspectChanged"
QT_MOC_LITERAL(42, 771, 27), // "videoOutParamsAspectChanged"
QT_MOC_LITERAL(43, 799, 18), // "windowScaleChanged"
QT_MOC_LITERAL(44, 818, 25), // "currentWindowScaleChanged"
QT_MOC_LITERAL(45, 844, 24), // "audioParamsFormatChanged"
QT_MOC_LITERAL(46, 869, 17), // "audioCodecChanged"
QT_MOC_LITERAL(47, 887, 21), // "audioCodecNameChanged"
QT_MOC_LITERAL(48, 909, 15), // "filenameChanged"
QT_MOC_LITERAL(49, 925, 17), // "fileFormatChanged"
QT_MOC_LITERAL(50, 943, 15), // "fileSizeChanged"
QT_MOC_LITERAL(51, 959, 18), // "audioFormatChanged"
QT_MOC_LITERAL(52, 978, 12), // "hwdecChanged"
QT_MOC_LITERAL(53, 991, 19), // "hwdecCurrentChanged"
QT_MOC_LITERAL(54, 1011, 19), // "hwdecInteropChanged"
QT_MOC_LITERAL(55, 1031, 17), // "mediaTitleChanged"
QT_MOC_LITERAL(56, 1049, 11), // "pathChanged"
QT_MOC_LITERAL(57, 1061, 17), // "videoCodecChanged"
QT_MOC_LITERAL(58, 1079, 18), // "videoFormatChanged"
QT_MOC_LITERAL(59, 1098, 29), // "videoParamsPixelformatChanged"
QT_MOC_LITERAL(60, 1128, 32), // "videoOutParamsPixelformatChanged"
QT_MOC_LITERAL(61, 1161, 17), // "ytdlFormatChanged"
QT_MOC_LITERAL(62, 1179, 24), // "demuxerCacheStateChanged"
QT_MOC_LITERAL(63, 1204, 18), // "enableAudioChanged"
QT_MOC_LITERAL(64, 1223, 15), // "useHwdecChanged"
QT_MOC_LITERAL(65, 1239, 16), // "isPlayingChanged"
QT_MOC_LITERAL(66, 1256, 15), // "durationChanged"
QT_MOC_LITERAL(67, 1272, 15), // "positionChanged"
QT_MOC_LITERAL(68, 1288, 10), // "mpvUpdated"
QT_MOC_LITERAL(69, 1299, 10), // "logMessage"
QT_MOC_LITERAL(70, 1310, 6), // "prefix"
QT_MOC_LITERAL(71, 1317, 5), // "level"
QT_MOC_LITERAL(72, 1323, 4), // "text"
QT_MOC_LITERAL(73, 1328, 11), // "fileStarted"
QT_MOC_LITERAL(74, 1340, 9), // "fileEnded"
QT_MOC_LITERAL(75, 1350, 6), // "reason"
QT_MOC_LITERAL(76, 1357, 10), // "fileLoaded"
QT_MOC_LITERAL(77, 1368, 10), // "idleActive"
QT_MOC_LITERAL(78, 1379, 5), // "muted"
QT_MOC_LITERAL(79, 1385, 9), // "set_muted"
QT_MOC_LITERAL(80, 1395, 6), // "paused"
QT_MOC_LITERAL(81, 1402, 10), // "set_paused"
QT_MOC_LITERAL(82, 1413, 14), // "pausedForCache"
QT_MOC_LITERAL(83, 1428, 8), // "seekable"
QT_MOC_LITERAL(84, 1437, 7), // "chapter"
QT_MOC_LITERAL(85, 1445, 16), // "chapterListCount"
QT_MOC_LITERAL(86, 1462, 21), // "decoderFrameDropCount"
QT_MOC_LITERAL(87, 1484, 7), // "dheight"
QT_MOC_LITERAL(88, 1492, 6), // "dwidth"
QT_MOC_LITERAL(89, 1499, 19), // "estimatedFrameCount"
QT_MOC_LITERAL(90, 1519, 20), // "estimatedFrameNumber"
QT_MOC_LITERAL(91, 1540, 14), // "frameDropCount"
QT_MOC_LITERAL(92, 1555, 11), // "playlistPos"
QT_MOC_LITERAL(93, 1567, 15), // "set_playlistPos"
QT_MOC_LITERAL(94, 1583, 13), // "playlistCount"
QT_MOC_LITERAL(95, 1597, 19), // "voDelayedFrameCount"
QT_MOC_LITERAL(96, 1617, 23), // "set_voDelayedFrameCount"
QT_MOC_LITERAL(97, 1641, 6), // "volume"
QT_MOC_LITERAL(98, 1648, 10), // "set_volume"
QT_MOC_LITERAL(99, 1659, 8), // "contrast"
QT_MOC_LITERAL(100, 1668, 12), // "set_contrast"
QT_MOC_LITERAL(101, 1681, 10), // "brightness"
QT_MOC_LITERAL(102, 1692, 14), // "set_brightness"
QT_MOC_LITERAL(103, 1707, 5), // "gamma"
QT_MOC_LITERAL(104, 1713, 9), // "set_gamma"
QT_MOC_LITERAL(105, 1723, 10), // "saturation"
QT_MOC_LITERAL(106, 1734, 14), // "set_saturation"
QT_MOC_LITERAL(107, 1749, 10), // "subMarginY"
QT_MOC_LITERAL(108, 1760, 14), // "set_subMarginY"
QT_MOC_LITERAL(109, 1775, 3), // "vid"
QT_MOC_LITERAL(110, 1779, 3), // "aid"
QT_MOC_LITERAL(111, 1783, 3), // "sid"
QT_MOC_LITERAL(112, 1787, 23), // "audioParamsChannelCount"
QT_MOC_LITERAL(113, 1811, 21), // "audioParamsSampleRate"
QT_MOC_LITERAL(114, 1833, 14), // "trackListCount"
QT_MOC_LITERAL(115, 1848, 12), // "audioBitrate"
QT_MOC_LITERAL(116, 1861, 6), // "avsync"
QT_MOC_LITERAL(117, 1868, 12), // "containerFps"
QT_MOC_LITERAL(118, 1881, 20), // "demuxerCacheDuration"
QT_MOC_LITERAL(119, 1902, 10), // "displayFps"
QT_MOC_LITERAL(120, 1913, 19), // "estimatedDisplayFps"
QT_MOC_LITERAL(121, 1933, 14), // "estimatedVfFps"
QT_MOC_LITERAL(122, 1948, 3), // "fps"
QT_MOC_LITERAL(123, 1952, 5), // "speed"
QT_MOC_LITERAL(124, 1958, 9), // "set_speed"
QT_MOC_LITERAL(125, 1968, 12), // "videoBitrate"
QT_MOC_LITERAL(126, 1981, 17), // "videoParamsAspect"
QT_MOC_LITERAL(127, 1999, 20), // "videoOutParamsAspect"
QT_MOC_LITERAL(128, 2020, 11), // "windowScale"
QT_MOC_LITERAL(129, 2032, 15), // "set_windowScale"
QT_MOC_LITERAL(130, 2048, 18), // "currentWindowScale"
QT_MOC_LITERAL(131, 2067, 17), // "audioParamsFormat"
QT_MOC_LITERAL(132, 2085, 10), // "audioCodec"
QT_MOC_LITERAL(133, 2096, 14), // "audioCodecName"
QT_MOC_LITERAL(134, 2111, 8), // "filename"
QT_MOC_LITERAL(135, 2120, 10), // "fileFormat"
QT_MOC_LITERAL(136, 2131, 8), // "fileSize"
QT_MOC_LITERAL(137, 2140, 11), // "audioFormat"
QT_MOC_LITERAL(138, 2152, 5), // "hwdec"
QT_MOC_LITERAL(139, 2158, 9), // "set_hwdec"
QT_MOC_LITERAL(140, 2168, 12), // "hwdecCurrent"
QT_MOC_LITERAL(141, 2181, 12), // "hwdecInterop"
QT_MOC_LITERAL(142, 2194, 10), // "mediaTitle"
QT_MOC_LITERAL(143, 2205, 4), // "path"
QT_MOC_LITERAL(144, 2210, 10), // "videoCodec"
QT_MOC_LITERAL(145, 2221, 11), // "videoFormat"
QT_MOC_LITERAL(146, 2233, 22), // "videoParamsPixelformat"
QT_MOC_LITERAL(147, 2256, 25), // "videoOutParamsPixelformat"
QT_MOC_LITERAL(148, 2282, 10), // "ytdlFormat"
QT_MOC_LITERAL(149, 2293, 17), // "demuxerCacheState"
QT_MOC_LITERAL(150, 2311, 7), // "command"
QT_MOC_LITERAL(151, 2319, 6), // "params"
QT_MOC_LITERAL(152, 2326, 12), // "commandAsync"
QT_MOC_LITERAL(153, 2339, 9), // "playPause"
QT_MOC_LITERAL(154, 2349, 4), // "play"
QT_MOC_LITERAL(155, 2354, 5), // "pause"
QT_MOC_LITERAL(156, 2360, 4), // "stop"
QT_MOC_LITERAL(157, 2365, 12), // "stepBackward"
QT_MOC_LITERAL(158, 2378, 11), // "stepForward"
QT_MOC_LITERAL(159, 2390, 4), // "seek"
QT_MOC_LITERAL(160, 2395, 3), // "pos"
QT_MOC_LITERAL(161, 2399, 8), // "loadFile"
QT_MOC_LITERAL(162, 2408, 4), // "urls"
QT_MOC_LITERAL(163, 2413, 6), // "subAdd"
QT_MOC_LITERAL(164, 2420, 11), // "enableAudio"
QT_MOC_LITERAL(165, 2432, 14), // "setEnableAudio"
QT_MOC_LITERAL(166, 2447, 8), // "useHwdec"
QT_MOC_LITERAL(167, 2456, 11), // "setUseHwdec"
QT_MOC_LITERAL(168, 2468, 9), // "isPlaying"
QT_MOC_LITERAL(169, 2478, 11), // "updateState"
QT_MOC_LITERAL(170, 2490, 8), // "duration"
QT_MOC_LITERAL(171, 2499, 8), // "position"
QT_MOC_LITERAL(172, 2508, 11), // "onMpvEvents"
QT_MOC_LITERAL(173, 2520, 8), // "doUpdate"
QT_MOC_LITERAL(174, 2529, 11), // "setProperty"
QT_MOC_LITERAL(175, 2541, 4), // "name"
QT_MOC_LITERAL(176, 2546, 11), // "getProperty"
QT_MOC_LITERAL(177, 2558, 9), // "setOption"
QT_MOC_LITERAL(178, 2568, 19), // "getPlaylistFilename"
QT_MOC_LITERAL(179, 2588, 13), // "playlistIndex"
QT_MOC_LITERAL(180, 2602, 16), // "getPlaylistTitle"
QT_MOC_LITERAL(181, 2619, 15), // "getChapterTitle"
QT_MOC_LITERAL(182, 2635, 12), // "chapterIndex"
QT_MOC_LITERAL(183, 2648, 14) // "getChapterTime"

    },
    "MpvObject\0idleActiveChanged\0\0value\0"
    "mutedChanged\0pausedChanged\0"
    "pausedForCacheChanged\0seekableChanged\0"
    "chapterChanged\0chapterListCountChanged\0"
    "decoderFrameDropCountChanged\0"
    "dheightChanged\0dwidthChanged\0"
    "estimatedFrameCountChanged\0"
    "estimatedFrameNumberChanged\0"
    "frameDropCountChanged\0playlistPosChanged\0"
    "playlistCountChanged\0voDelayedFrameCountChanged\0"
    "volumeChanged\0contrastChanged\0"
    "brightnessChanged\0gammaChanged\0"
    "saturationChanged\0subMarginYChanged\0"
    "vidChanged\0aidChanged\0sidChanged\0"
    "audioParamsChannelCountChanged\0"
    "audioParamsSampleRateChanged\0"
    "trackListCountChanged\0audioBitrateChanged\0"
    "avsyncChanged\0containerFpsChanged\0"
    "demuxerCacheDurationChanged\0"
    "displayFpsChanged\0estimatedDisplayFpsChanged\0"
    "estimatedVfFpsChanged\0fpsChanged\0"
    "speedChanged\0videoBitrateChanged\0"
    "videoParamsAspectChanged\0"
    "videoOutParamsAspectChanged\0"
    "windowScaleChanged\0currentWindowScaleChanged\0"
    "audioParamsFormatChanged\0audioCodecChanged\0"
    "audioCodecNameChanged\0filenameChanged\0"
    "fileFormatChanged\0fileSizeChanged\0"
    "audioFormatChanged\0hwdecChanged\0"
    "hwdecCurrentChanged\0hwdecInteropChanged\0"
    "mediaTitleChanged\0pathChanged\0"
    "videoCodecChanged\0videoFormatChanged\0"
    "videoParamsPixelformatChanged\0"
    "videoOutParamsPixelformatChanged\0"
    "ytdlFormatChanged\0demuxerCacheStateChanged\0"
    "enableAudioChanged\0useHwdecChanged\0"
    "isPlayingChanged\0durationChanged\0"
    "positionChanged\0mpvUpdated\0logMessage\0"
    "prefix\0level\0text\0fileStarted\0fileEnded\0"
    "reason\0fileLoaded\0idleActive\0muted\0"
    "set_muted\0paused\0set_paused\0pausedForCache\0"
    "seekable\0chapter\0chapterListCount\0"
    "decoderFrameDropCount\0dheight\0dwidth\0"
    "estimatedFrameCount\0estimatedFrameNumber\0"
    "frameDropCount\0playlistPos\0set_playlistPos\0"
    "playlistCount\0voDelayedFrameCount\0"
    "set_voDelayedFrameCount\0volume\0"
    "set_volume\0contrast\0set_contrast\0"
    "brightness\0set_brightness\0gamma\0"
    "set_gamma\0saturation\0set_saturation\0"
    "subMarginY\0set_subMarginY\0vid\0aid\0sid\0"
    "audioParamsChannelCount\0audioParamsSampleRate\0"
    "trackListCount\0audioBitrate\0avsync\0"
    "containerFps\0demuxerCacheDuration\0"
    "displayFps\0estimatedDisplayFps\0"
    "estimatedVfFps\0fps\0speed\0set_speed\0"
    "videoBitrate\0videoParamsAspect\0"
    "videoOutParamsAspect\0windowScale\0"
    "set_windowScale\0currentWindowScale\0"
    "audioParamsFormat\0audioCodec\0"
    "audioCodecName\0filename\0fileFormat\0"
    "fileSize\0audioFormat\0hwdec\0set_hwdec\0"
    "hwdecCurrent\0hwdecInterop\0mediaTitle\0"
    "path\0videoCodec\0videoFormat\0"
    "videoParamsPixelformat\0videoOutParamsPixelformat\0"
    "ytdlFormat\0demuxerCacheState\0command\0"
    "params\0commandAsync\0playPause\0play\0"
    "pause\0stop\0stepBackward\0stepForward\0"
    "seek\0pos\0loadFile\0urls\0subAdd\0enableAudio\0"
    "setEnableAudio\0useHwdec\0setUseHwdec\0"
    "isPlaying\0updateState\0duration\0position\0"
    "onMpvEvents\0doUpdate\0setProperty\0name\0"
    "getProperty\0setOption\0getPlaylistFilename\0"
    "playlistIndex\0getPlaylistTitle\0"
    "getChapterTitle\0chapterIndex\0"
    "getChapterTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpvObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     171,   14, // methods
      65, 1236, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      70,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  869,    2, 0x06 /* Public */,
       4,    1,  872,    2, 0x06 /* Public */,
       5,    1,  875,    2, 0x06 /* Public */,
       6,    1,  878,    2, 0x06 /* Public */,
       7,    1,  881,    2, 0x06 /* Public */,
       8,    1,  884,    2, 0x06 /* Public */,
       9,    1,  887,    2, 0x06 /* Public */,
      10,    1,  890,    2, 0x06 /* Public */,
      11,    1,  893,    2, 0x06 /* Public */,
      12,    1,  896,    2, 0x06 /* Public */,
      13,    1,  899,    2, 0x06 /* Public */,
      14,    1,  902,    2, 0x06 /* Public */,
      15,    1,  905,    2, 0x06 /* Public */,
      16,    1,  908,    2, 0x06 /* Public */,
      17,    1,  911,    2, 0x06 /* Public */,
      18,    1,  914,    2, 0x06 /* Public */,
      19,    1,  917,    2, 0x06 /* Public */,
      20,    1,  920,    2, 0x06 /* Public */,
      21,    1,  923,    2, 0x06 /* Public */,
      22,    1,  926,    2, 0x06 /* Public */,
      23,    1,  929,    2, 0x06 /* Public */,
      24,    1,  932,    2, 0x06 /* Public */,
      25,    1,  935,    2, 0x06 /* Public */,
      26,    1,  938,    2, 0x06 /* Public */,
      27,    1,  941,    2, 0x06 /* Public */,
      28,    1,  944,    2, 0x06 /* Public */,
      29,    1,  947,    2, 0x06 /* Public */,
      30,    1,  950,    2, 0x06 /* Public */,
      31,    1,  953,    2, 0x06 /* Public */,
      32,    1,  956,    2, 0x06 /* Public */,
      33,    1,  959,    2, 0x06 /* Public */,
      34,    1,  962,    2, 0x06 /* Public */,
      35,    1,  965,    2, 0x06 /* Public */,
      36,    1,  968,    2, 0x06 /* Public */,
      37,    1,  971,    2, 0x06 /* Public */,
      38,    1,  974,    2, 0x06 /* Public */,
      39,    1,  977,    2, 0x06 /* Public */,
      40,    1,  980,    2, 0x06 /* Public */,
      41,    1,  983,    2, 0x06 /* Public */,
      42,    1,  986,    2, 0x06 /* Public */,
      43,    1,  989,    2, 0x06 /* Public */,
      44,    1,  992,    2, 0x06 /* Public */,
      45,    1,  995,    2, 0x06 /* Public */,
      46,    1,  998,    2, 0x06 /* Public */,
      47,    1, 1001,    2, 0x06 /* Public */,
      48,    1, 1004,    2, 0x06 /* Public */,
      49,    1, 1007,    2, 0x06 /* Public */,
      50,    1, 1010,    2, 0x06 /* Public */,
      51,    1, 1013,    2, 0x06 /* Public */,
      52,    1, 1016,    2, 0x06 /* Public */,
      53,    1, 1019,    2, 0x06 /* Public */,
      54,    1, 1022,    2, 0x06 /* Public */,
      55,    1, 1025,    2, 0x06 /* Public */,
      56,    1, 1028,    2, 0x06 /* Public */,
      57,    1, 1031,    2, 0x06 /* Public */,
      58,    1, 1034,    2, 0x06 /* Public */,
      59,    1, 1037,    2, 0x06 /* Public */,
      60,    1, 1040,    2, 0x06 /* Public */,
      61,    1, 1043,    2, 0x06 /* Public */,
      62,    1, 1046,    2, 0x06 /* Public */,
      63,    1, 1049,    2, 0x06 /* Public */,
      64,    1, 1052,    2, 0x06 /* Public */,
      65,    1, 1055,    2, 0x06 /* Public */,
      66,    1, 1058,    2, 0x06 /* Public */,
      67,    1, 1061,    2, 0x06 /* Public */,
      68,    0, 1064,    2, 0x06 /* Public */,
      69,    3, 1065,    2, 0x06 /* Public */,
      73,    0, 1072,    2, 0x06 /* Public */,
      74,    1, 1073,    2, 0x06 /* Public */,
      76,    0, 1076,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      77,    0, 1077,    2, 0x0a /* Public */,
      78,    0, 1078,    2, 0x0a /* Public */,
      79,    1, 1079,    2, 0x0a /* Public */,
      80,    0, 1082,    2, 0x0a /* Public */,
      81,    1, 1083,    2, 0x0a /* Public */,
      82,    0, 1086,    2, 0x0a /* Public */,
      83,    0, 1087,    2, 0x0a /* Public */,
      84,    0, 1088,    2, 0x0a /* Public */,
      85,    0, 1089,    2, 0x0a /* Public */,
      86,    0, 1090,    2, 0x0a /* Public */,
      87,    0, 1091,    2, 0x0a /* Public */,
      88,    0, 1092,    2, 0x0a /* Public */,
      89,    0, 1093,    2, 0x0a /* Public */,
      90,    0, 1094,    2, 0x0a /* Public */,
      91,    0, 1095,    2, 0x0a /* Public */,
      92,    0, 1096,    2, 0x0a /* Public */,
      93,    1, 1097,    2, 0x0a /* Public */,
      94,    0, 1100,    2, 0x0a /* Public */,
      95,    0, 1101,    2, 0x0a /* Public */,
      96,    1, 1102,    2, 0x0a /* Public */,
      97,    0, 1105,    2, 0x0a /* Public */,
      98,    1, 1106,    2, 0x0a /* Public */,
      99,    0, 1109,    2, 0x0a /* Public */,
     100,    1, 1110,    2, 0x0a /* Public */,
     101,    0, 1113,    2, 0x0a /* Public */,
     102,    1, 1114,    2, 0x0a /* Public */,
     103,    0, 1117,    2, 0x0a /* Public */,
     104,    1, 1118,    2, 0x0a /* Public */,
     105,    0, 1121,    2, 0x0a /* Public */,
     106,    1, 1122,    2, 0x0a /* Public */,
     107,    0, 1125,    2, 0x0a /* Public */,
     108,    1, 1126,    2, 0x0a /* Public */,
     109,    0, 1129,    2, 0x0a /* Public */,
     110,    0, 1130,    2, 0x0a /* Public */,
     111,    0, 1131,    2, 0x0a /* Public */,
     112,    0, 1132,    2, 0x0a /* Public */,
     113,    0, 1133,    2, 0x0a /* Public */,
     114,    0, 1134,    2, 0x0a /* Public */,
     115,    0, 1135,    2, 0x0a /* Public */,
     116,    0, 1136,    2, 0x0a /* Public */,
     117,    0, 1137,    2, 0x0a /* Public */,
     118,    0, 1138,    2, 0x0a /* Public */,
     119,    0, 1139,    2, 0x0a /* Public */,
     120,    0, 1140,    2, 0x0a /* Public */,
     121,    0, 1141,    2, 0x0a /* Public */,
     122,    0, 1142,    2, 0x0a /* Public */,
     123,    0, 1143,    2, 0x0a /* Public */,
     124,    1, 1144,    2, 0x0a /* Public */,
     125,    0, 1147,    2, 0x0a /* Public */,
     126,    0, 1148,    2, 0x0a /* Public */,
     127,    0, 1149,    2, 0x0a /* Public */,
     128,    0, 1150,    2, 0x0a /* Public */,
     129,    1, 1151,    2, 0x0a /* Public */,
     130,    0, 1154,    2, 0x0a /* Public */,
     131,    0, 1155,    2, 0x0a /* Public */,
     132,    0, 1156,    2, 0x0a /* Public */,
     133,    0, 1157,    2, 0x0a /* Public */,
     134,    0, 1158,    2, 0x0a /* Public */,
     135,    0, 1159,    2, 0x0a /* Public */,
     136,    0, 1160,    2, 0x0a /* Public */,
     137,    0, 1161,    2, 0x0a /* Public */,
     138,    0, 1162,    2, 0x0a /* Public */,
     139,    1, 1163,    2, 0x0a /* Public */,
     140,    0, 1166,    2, 0x0a /* Public */,
     141,    0, 1167,    2, 0x0a /* Public */,
     142,    0, 1168,    2, 0x0a /* Public */,
     143,    0, 1169,    2, 0x0a /* Public */,
     144,    0, 1170,    2, 0x0a /* Public */,
     145,    0, 1171,    2, 0x0a /* Public */,
     146,    0, 1172,    2, 0x0a /* Public */,
     147,    0, 1173,    2, 0x0a /* Public */,
     148,    0, 1174,    2, 0x0a /* Public */,
     149,    0, 1175,    2, 0x0a /* Public */,
     150,    1, 1176,    2, 0x0a /* Public */,
     152,    1, 1179,    2, 0x0a /* Public */,
     153,    0, 1182,    2, 0x0a /* Public */,
     154,    0, 1183,    2, 0x0a /* Public */,
     155,    0, 1184,    2, 0x0a /* Public */,
     156,    0, 1185,    2, 0x0a /* Public */,
     157,    0, 1186,    2, 0x0a /* Public */,
     158,    0, 1187,    2, 0x0a /* Public */,
     159,    1, 1188,    2, 0x0a /* Public */,
     161,    1, 1191,    2, 0x0a /* Public */,
     163,    1, 1194,    2, 0x0a /* Public */,
     164,    0, 1197,    2, 0x0a /* Public */,
     165,    1, 1198,    2, 0x0a /* Public */,
     166,    0, 1201,    2, 0x0a /* Public */,
     167,    1, 1202,    2, 0x0a /* Public */,
     168,    0, 1205,    2, 0x0a /* Public */,
     169,    0, 1206,    2, 0x0a /* Public */,
     170,    0, 1207,    2, 0x0a /* Public */,
     171,    0, 1208,    2, 0x0a /* Public */,
     172,    0, 1209,    2, 0x08 /* Private */,
     173,    0, 1210,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     174,    2, 1211,    2, 0x02 /* Public */,
     176,    1, 1216,    2, 0x02 /* Public */,
     177,    2, 1219,    2, 0x02 /* Public */,
     178,    1, 1224,    2, 0x02 /* Public */,
     180,    1, 1227,    2, 0x02 /* Public */,
     181,    1, 1230,    2, 0x02 /* Public */,
     183,    1, 1233,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   70,   71,   72,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   75,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Double,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariant,  151,
    QMetaType::Void, QMetaType::QVariant,  151,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,  160,
    QMetaType::Void, QMetaType::QVariant,  162,
    QMetaType::Void, QMetaType::QVariant,  162,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,  175,    3,
    QMetaType::QVariant, QMetaType::QString,  175,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,  175,    3,
    QMetaType::QString, QMetaType::Int,  179,
    QMetaType::QString, QMetaType::Int,  179,
    QMetaType::QString, QMetaType::Int,  182,
    QMetaType::Double, QMetaType::Int,  182,

 // properties: name, type, flags
     164, QMetaType::Bool, 0x00495103,
     166, QMetaType::Bool, 0x00495103,
      77, QMetaType::Bool, 0x00495001,
      78, QMetaType::Bool, 0x00495003,
      80, QMetaType::Bool, 0x00495003,
      82, QMetaType::Bool, 0x00495001,
      83, QMetaType::Bool, 0x00495001,
      84, QMetaType::Int, 0x00495001,
      85, QMetaType::Int, 0x00495001,
      86, QMetaType::Int, 0x00495001,
      87, QMetaType::Int, 0x00495001,
      88, QMetaType::Int, 0x00495001,
      89, QMetaType::Int, 0x00495001,
      90, QMetaType::Int, 0x00495001,
      91, QMetaType::Int, 0x00495001,
      92, QMetaType::Int, 0x00495003,
      94, QMetaType::Int, 0x00495001,
      95, QMetaType::Int, 0x00495003,
      97, QMetaType::Int, 0x00495003,
      99, QMetaType::Int, 0x00495003,
     101, QMetaType::Int, 0x00495003,
     103, QMetaType::Int, 0x00495003,
     105, QMetaType::Int, 0x00495003,
     107, QMetaType::Int, 0x00495003,
     109, QMetaType::Int, 0x00495001,
     110, QMetaType::Int, 0x00495001,
     111, QMetaType::Int, 0x00495001,
     112, QMetaType::Int, 0x00495001,
     113, QMetaType::Int, 0x00495001,
     114, QMetaType::Int, 0x00495001,
     115, QMetaType::Double, 0x00495001,
     116, QMetaType::Double, 0x00495001,
     117, QMetaType::Double, 0x00495001,
     118, QMetaType::Double, 0x00495001,
     119, QMetaType::Double, 0x00495001,
     120, QMetaType::Double, 0x00495001,
     121, QMetaType::Double, 0x00495001,
     122, QMetaType::Double, 0x00495001,
     123, QMetaType::Double, 0x00495003,
     125, QMetaType::Double, 0x00495001,
     126, QMetaType::Double, 0x00495001,
     127, QMetaType::Double, 0x00495001,
     128, QMetaType::Double, 0x00495003,
     130, QMetaType::Double, 0x00495001,
     131, QMetaType::QString, 0x00495001,
     132, QMetaType::QString, 0x00495001,
     133, QMetaType::QString, 0x00495001,
     134, QMetaType::QString, 0x00495001,
     135, QMetaType::QString, 0x00495001,
     136, QMetaType::QString, 0x00495001,
     137, QMetaType::QString, 0x00495001,
     138, QMetaType::QString, 0x00495003,
     140, QMetaType::QString, 0x00495001,
     141, QMetaType::QString, 0x00495001,
     142, QMetaType::QString, 0x00495001,
     143, QMetaType::QString, 0x00495001,
     144, QMetaType::QString, 0x00495001,
     145, QMetaType::QString, 0x00495001,
     146, QMetaType::QString, 0x00495001,
     147, QMetaType::QString, 0x00495001,
     148, QMetaType::QString, 0x00495001,
     149, QMetaType::QVariantMap, 0x00495001,
     168, QMetaType::Bool, 0x00495001,
     170, QMetaType::Double, 0x00495001,
     171, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
      60,
      61,
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,
      27,
      28,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      37,
      38,
      39,
      40,
      41,
      42,
      43,
      44,
      45,
      46,
      47,
      48,
      49,
      50,
      51,
      52,
      53,
      54,
      55,
      56,
      57,
      58,
      59,
      62,
      63,
      64,

       0        // eod
};

void MpvObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MpvObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->idleActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->pausedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pausedForCacheChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->seekableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->chapterChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->chapterListCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->decoderFrameDropCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->dheightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->dwidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->estimatedFrameCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->estimatedFrameNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->frameDropCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->playlistPosChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->playlistCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->voDelayedFrameCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->contrastChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->brightnessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->gammaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->saturationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->subMarginYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->vidChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->aidChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->sidChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->audioParamsChannelCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->audioParamsSampleRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->trackListCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->audioBitrateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->avsyncChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: _t->containerFpsChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: _t->demuxerCacheDurationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 32: _t->displayFpsChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 33: _t->estimatedDisplayFpsChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 34: _t->estimatedVfFpsChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 35: _t->fpsChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 36: _t->speedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 37: _t->videoBitrateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 38: _t->videoParamsAspectChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 39: _t->videoOutParamsAspectChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 40: _t->windowScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 41: _t->currentWindowScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 42: _t->audioParamsFormatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: _t->audioCodecChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: _t->audioCodecNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 45: _t->filenameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->fileFormatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 47: _t->fileSizeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->audioFormatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->hwdecChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->hwdecCurrentChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->hwdecInteropChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 52: _t->mediaTitleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 53: _t->pathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 54: _t->videoCodecChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 55: _t->videoFormatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 56: _t->videoParamsPixelformatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 57: _t->videoOutParamsPixelformatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 58: _t->ytdlFormatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 59: _t->demuxerCacheStateChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 60: _t->enableAudioChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->useHwdecChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->isPlayingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->durationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 64: _t->positionChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 65: _t->mpvUpdated(); break;
        case 66: _t->logMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 67: _t->fileStarted(); break;
        case 68: _t->fileEnded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 69: _t->fileLoaded(); break;
        case 70: { bool _r = _t->idleActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 71: { bool _r = _t->muted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->set_muted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: { bool _r = _t->paused();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 74: _t->set_paused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: { bool _r = _t->pausedForCache();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 76: { bool _r = _t->seekable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 77: { int _r = _t->chapter();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 78: { int _r = _t->chapterListCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 79: { int _r = _t->decoderFrameDropCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 80: { int _r = _t->dheight();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 81: { int _r = _t->dwidth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 82: { int _r = _t->estimatedFrameCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 83: { int _r = _t->estimatedFrameNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 84: { int _r = _t->frameDropCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 85: { int _r = _t->playlistPos();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 86: _t->set_playlistPos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 87: { int _r = _t->playlistCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 88: { int _r = _t->voDelayedFrameCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 89: _t->set_voDelayedFrameCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 90: { int _r = _t->volume();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 91: _t->set_volume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: { int _r = _t->contrast();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 93: _t->set_contrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: { int _r = _t->brightness();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 95: _t->set_brightness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 96: { int _r = _t->gamma();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 97: _t->set_gamma((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 98: { int _r = _t->saturation();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 99: _t->set_saturation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 100: { int _r = _t->subMarginY();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 101: _t->set_subMarginY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 102: { int _r = _t->vid();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 103: { int _r = _t->aid();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 104: { int _r = _t->sid();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 105: { int _r = _t->audioParamsChannelCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 106: { int _r = _t->audioParamsSampleRate();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 107: { int _r = _t->trackListCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 108: { double _r = _t->audioBitrate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 109: { double _r = _t->avsync();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 110: { double _r = _t->containerFps();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 111: { double _r = _t->demuxerCacheDuration();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 112: { double _r = _t->displayFps();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 113: { double _r = _t->estimatedDisplayFps();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 114: { double _r = _t->estimatedVfFps();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 115: { double _r = _t->fps();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 116: { double _r = _t->speed();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 117: _t->set_speed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 118: { double _r = _t->videoBitrate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 119: { double _r = _t->videoParamsAspect();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 120: { double _r = _t->videoOutParamsAspect();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 121: { double _r = _t->windowScale();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 122: _t->set_windowScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 123: { double _r = _t->currentWindowScale();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 124: { QString _r = _t->audioParamsFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 125: { QString _r = _t->audioCodec();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 126: { QString _r = _t->audioCodecName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 127: { QString _r = _t->filename();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 128: { QString _r = _t->fileFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 129: { QString _r = _t->fileSize();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 130: { QString _r = _t->audioFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 131: { QString _r = _t->hwdec();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 132: _t->set_hwdec((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 133: { QString _r = _t->hwdecCurrent();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 134: { QString _r = _t->hwdecInterop();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 135: { QString _r = _t->mediaTitle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 136: { QString _r = _t->path();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 137: { QString _r = _t->videoCodec();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 138: { QString _r = _t->videoFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 139: { QString _r = _t->videoParamsPixelformat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 140: { QString _r = _t->videoOutParamsPixelformat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 141: { QString _r = _t->ytdlFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 142: { QVariantMap _r = _t->demuxerCacheState();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 143: _t->command((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 144: _t->commandAsync((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 145: _t->playPause(); break;
        case 146: _t->play(); break;
        case 147: _t->pause(); break;
        case 148: _t->stop(); break;
        case 149: _t->stepBackward(); break;
        case 150: _t->stepForward(); break;
        case 151: _t->seek((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 152: _t->loadFile((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 153: _t->subAdd((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 154: { bool _r = _t->enableAudio();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 155: _t->setEnableAudio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 156: { bool _r = _t->useHwdec();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 157: _t->setUseHwdec((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 158: { bool _r = _t->isPlaying();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 159: _t->updateState(); break;
        case 160: { double _r = _t->duration();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 161: { double _r = _t->position();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 162: _t->onMpvEvents(); break;
        case 163: _t->doUpdate(); break;
        case 164: _t->setProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 165: { QVariant _r = _t->getProperty((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 166: _t->setOption((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 167: { QString _r = _t->getPlaylistFilename((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 168: { QString _r = _t->getPlaylistTitle((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 169: { QString _r = _t->getChapterTitle((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 170: { double _r = _t->getChapterTime((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MpvObject::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::idleActiveChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::mutedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::pausedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::pausedForCacheChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::seekableChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::chapterChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::chapterListCountChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::decoderFrameDropCountChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::dheightChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::dwidthChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::estimatedFrameCountChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::estimatedFrameNumberChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::frameDropCountChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::playlistPosChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::playlistCountChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::voDelayedFrameCountChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::volumeChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::contrastChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::brightnessChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::gammaChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::saturationChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::subMarginYChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::vidChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::aidChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::sidChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::audioParamsChannelCountChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::audioParamsSampleRateChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::trackListCountChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::audioBitrateChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::avsyncChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::containerFpsChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::demuxerCacheDurationChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::displayFpsChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::estimatedDisplayFpsChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::estimatedVfFpsChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::fpsChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::speedChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::videoBitrateChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::videoParamsAspectChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::videoOutParamsAspectChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::windowScaleChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::currentWindowScaleChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::audioParamsFormatChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::audioCodecChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::audioCodecNameChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::filenameChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::fileFormatChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::fileSizeChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::audioFormatChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::hwdecChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::hwdecCurrentChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::hwdecInteropChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::mediaTitleChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::pathChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::videoCodecChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::videoFormatChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::videoParamsPixelformatChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::videoOutParamsPixelformatChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::ytdlFormatChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::demuxerCacheStateChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::enableAudioChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::useHwdecChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::isPlayingChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::durationChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::positionChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::mpvUpdated)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::logMessage)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::fileStarted)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::fileEnded)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (MpvObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpvObject::fileLoaded)) {
                *result = 69;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MpvObject *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->enableAudio(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->useHwdec(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->idleActive(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->muted(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->paused(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->pausedForCache(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->seekable(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->chapter(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->chapterListCount(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->decoderFrameDropCount(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->dheight(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->dwidth(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->estimatedFrameCount(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->estimatedFrameNumber(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->frameDropCount(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->playlistPos(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->playlistCount(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->voDelayedFrameCount(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->volume(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->contrast(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->brightness(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->gamma(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->saturation(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->subMarginY(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->vid(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->aid(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->sid(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->audioParamsChannelCount(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->audioParamsSampleRate(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->trackListCount(); break;
        case 30: *reinterpret_cast< double*>(_v) = _t->audioBitrate(); break;
        case 31: *reinterpret_cast< double*>(_v) = _t->avsync(); break;
        case 32: *reinterpret_cast< double*>(_v) = _t->containerFps(); break;
        case 33: *reinterpret_cast< double*>(_v) = _t->demuxerCacheDuration(); break;
        case 34: *reinterpret_cast< double*>(_v) = _t->displayFps(); break;
        case 35: *reinterpret_cast< double*>(_v) = _t->estimatedDisplayFps(); break;
        case 36: *reinterpret_cast< double*>(_v) = _t->estimatedVfFps(); break;
        case 37: *reinterpret_cast< double*>(_v) = _t->fps(); break;
        case 38: *reinterpret_cast< double*>(_v) = _t->speed(); break;
        case 39: *reinterpret_cast< double*>(_v) = _t->videoBitrate(); break;
        case 40: *reinterpret_cast< double*>(_v) = _t->videoParamsAspect(); break;
        case 41: *reinterpret_cast< double*>(_v) = _t->videoOutParamsAspect(); break;
        case 42: *reinterpret_cast< double*>(_v) = _t->windowScale(); break;
        case 43: *reinterpret_cast< double*>(_v) = _t->currentWindowScale(); break;
        case 44: *reinterpret_cast< QString*>(_v) = _t->audioParamsFormat(); break;
        case 45: *reinterpret_cast< QString*>(_v) = _t->audioCodec(); break;
        case 46: *reinterpret_cast< QString*>(_v) = _t->audioCodecName(); break;
        case 47: *reinterpret_cast< QString*>(_v) = _t->filename(); break;
        case 48: *reinterpret_cast< QString*>(_v) = _t->fileFormat(); break;
        case 49: *reinterpret_cast< QString*>(_v) = _t->fileSize(); break;
        case 50: *reinterpret_cast< QString*>(_v) = _t->audioFormat(); break;
        case 51: *reinterpret_cast< QString*>(_v) = _t->hwdec(); break;
        case 52: *reinterpret_cast< QString*>(_v) = _t->hwdecCurrent(); break;
        case 53: *reinterpret_cast< QString*>(_v) = _t->hwdecInterop(); break;
        case 54: *reinterpret_cast< QString*>(_v) = _t->mediaTitle(); break;
        case 55: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 56: *reinterpret_cast< QString*>(_v) = _t->videoCodec(); break;
        case 57: *reinterpret_cast< QString*>(_v) = _t->videoFormat(); break;
        case 58: *reinterpret_cast< QString*>(_v) = _t->videoParamsPixelformat(); break;
        case 59: *reinterpret_cast< QString*>(_v) = _t->videoOutParamsPixelformat(); break;
        case 60: *reinterpret_cast< QString*>(_v) = _t->ytdlFormat(); break;
        case 61: *reinterpret_cast< QVariantMap*>(_v) = _t->demuxerCacheState(); break;
        case 62: *reinterpret_cast< bool*>(_v) = _t->isPlaying(); break;
        case 63: *reinterpret_cast< double*>(_v) = _t->duration(); break;
        case 64: *reinterpret_cast< double*>(_v) = _t->position(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MpvObject *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnableAudio(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUseHwdec(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->set_muted(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->set_paused(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->set_playlistPos(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->set_voDelayedFrameCount(*reinterpret_cast< int*>(_v)); break;
        case 18: _t->set_volume(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->set_contrast(*reinterpret_cast< int*>(_v)); break;
        case 20: _t->set_brightness(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->set_gamma(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->set_saturation(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->set_subMarginY(*reinterpret_cast< int*>(_v)); break;
        case 38: _t->set_speed(*reinterpret_cast< double*>(_v)); break;
        case 42: _t->set_windowScale(*reinterpret_cast< double*>(_v)); break;
        case 51: _t->set_hwdec(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MpvObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickFramebufferObject::staticMetaObject>(),
    qt_meta_stringdata_MpvObject.data,
    qt_meta_data_MpvObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MpvObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpvObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MpvObject.stringdata0))
        return static_cast<void*>(this);
    return QQuickFramebufferObject::qt_metacast(_clname);
}

int MpvObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickFramebufferObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 171)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 171;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 171)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 171;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 65;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 65;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 65;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 65;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 65;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MpvObject::idleActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MpvObject::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MpvObject::pausedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MpvObject::pausedForCacheChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MpvObject::seekableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MpvObject::chapterChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MpvObject::chapterListCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MpvObject::decoderFrameDropCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MpvObject::dheightChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MpvObject::dwidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MpvObject::estimatedFrameCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MpvObject::estimatedFrameNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MpvObject::frameDropCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MpvObject::playlistPosChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MpvObject::playlistCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MpvObject::voDelayedFrameCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MpvObject::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MpvObject::contrastChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MpvObject::brightnessChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MpvObject::gammaChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MpvObject::saturationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MpvObject::subMarginYChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MpvObject::vidChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MpvObject::aidChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MpvObject::sidChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void MpvObject::audioParamsChannelCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MpvObject::audioParamsSampleRateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MpvObject::trackListCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MpvObject::audioBitrateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MpvObject::avsyncChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MpvObject::containerFpsChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MpvObject::demuxerCacheDurationChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MpvObject::displayFpsChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MpvObject::estimatedDisplayFpsChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MpvObject::estimatedVfFpsChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MpvObject::fpsChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void MpvObject::speedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void MpvObject::videoBitrateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void MpvObject::videoParamsAspectChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MpvObject::videoOutParamsAspectChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MpvObject::windowScaleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MpvObject::currentWindowScaleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void MpvObject::audioParamsFormatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void MpvObject::audioCodecChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void MpvObject::audioCodecNameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void MpvObject::filenameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void MpvObject::fileFormatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void MpvObject::fileSizeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void MpvObject::audioFormatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void MpvObject::hwdecChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void MpvObject::hwdecCurrentChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void MpvObject::hwdecInteropChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void MpvObject::mediaTitleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void MpvObject::pathChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void MpvObject::videoCodecChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void MpvObject::videoFormatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void MpvObject::videoParamsPixelformatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void MpvObject::videoOutParamsPixelformatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void MpvObject::ytdlFormatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void MpvObject::demuxerCacheStateChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void MpvObject::enableAudioChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void MpvObject::useHwdecChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void MpvObject::isPlayingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void MpvObject::durationChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void MpvObject::positionChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void MpvObject::mpvUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 65, nullptr);
}

// SIGNAL 66
void MpvObject::logMessage(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void MpvObject::fileStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 67, nullptr);
}

// SIGNAL 68
void MpvObject::fileEnded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void MpvObject::fileLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 69, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
