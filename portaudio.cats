/* ****** ****** */
//
// portaudio.cats
// Aliases to the C port audio library
//
/* ****** ****** */

#ifndef ATSCNTRB_PA_CATS
#define ATSCNTRB_PA_CATS

/* ****** ****** */

#include <portaudio.h>

/* ****** ****** */

#define atscntrb_portaudio_Pa_GetVersion Pa_GetVersion
#define atscntrb_portaudio_Pa_GetVersionText Pa_GetVersionText
#define atscntrb_portaudio_Pa_GetVersionInfo Pa_GetVersionInfo
#define atscntrb_portaudio_Pa_GetErrorText Pa_GetErrorText
#define atscntrb_portaudio_Pa_Initialize Pa_Initialize
#define atscntrb_portaudio_Pa_Terminate Pa_Terminate
#define atscntrb_portaudio_Pa_GetHostApiCount Pa_GetHostApiCount
#define atscntrb_portaudio_Pa_GetDefaultHostAPI Pa_GetDefaultHost_API
#define atscntrb_portaudio_Pa_GetHostApiInfo Pa_GetHostApiInfo
#define atscntrb_portaudio_Pa_HostApiTypeIdToHostApiIndex \
Pa_HostApiTypeIdToHostApiIndex
#define atscntrb_portaudio_Pa_HostApiDeviceIndexToDeviceIndex \
Pa_HostApiDeviceIndexToDeviceIndex
#define atscntrb_portaudio_Pa_GetLastHostErrorInfo Pa_GetLastHostErrorInfo
#define atscntrb_portaudio_Pa_GetDeviceCount Pa_GetDeviceCount
#define atscntrb_portaudio_Pa_GetDefaultInputDevice Pa_GetDefaultInputDevice
#define atscntrb_portaudio_Pa_GetDefaultOutputDevice Pa_GetDefaultOutputDevice
#define atscntrb_portaudio_Pa_GetDeviceInfo Pa_GetDeviceInfo
#define atscntrb_portaudio_Pa_IsFormatSupported Pa_IsFormatSupported
#define atscntrb_portaudio_Pa_OpenStream Pa_OpenStream
#define atscntrb_portaudio_Pa_OpenDefaultStream Pa_OpenDefaultStream
#define atscntrb_portaudio_Pa_CloseStream Pa_CloseStream
#define atscntrb_portaudio_Pa_SetStreamFinishedCallback \
Pa_SetStreamFinishedCallback
#define atscntrb_portaudio_Pa_StartStream Pa_StartStream
#define atscntrb_portaudio_Pa_StopStream Pa_StopStream
#define atscntrb_portaudio_Pa_AbortStream Pa_AbortStream
#define atscntrb_portaudio_Pa_IsStreamStopped Pa_IsStreamStopped
#define atscntrb_portaudio_Pa_IsStreamActive Pa_IsStreamActive
#define atscntrb_portaudio_Pa_GetStreamInfo Pa_GetStreamInfo
#define atscntrb_portaudio_Pa_GetStreamTime Pa_GetStreamTime
#define atscntrb_portaudio_Pa_GetStreamCpuLoad Pa_GetStreamCpuLoad
#define atscntrb_portaudio_Pa_ReadStream Pa_ReadStream
#define atscntrb_portaudio_Pa_WriteStream Pa_WriteStream
#define atscntrb_portaudio_Pa_GetStreamReadAvailable Pa_GetStreamReadAvailable
#define atscntrb_portaudio_Pa_GetStreamWriteAvailable Pa_GetStreamWriteAvailable
#define atscntrb_portaudio_Pa_GetSampleSize Pa_GetSampleSize
#define atscntrb_portaudio_Pa_Sleep Pa_Sleep

/* ****** ****** */

#endif

/* End of [portaudio.sats] */
