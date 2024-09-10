/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID PLAY_DB_SYNTH_2D_LP = 2517391619U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS = 2534169461U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P100 = 2834276857U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P200 = 2935089634U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P300 = 3035902443U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P400 = 3136715220U;
        static const AkUniqueID PLAY_DB_SYNTH_200HZ_2D_LP = 318505690U;
        static const AkUniqueID PLAY_OVERWORLD_1_1 = 3782120104U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace DAYNIGHT
        {
            static const AkUniqueID GROUP = 1705516017U;

            namespace STATE
            {
                static const AkUniqueID DAY = 311764537U;
                static const AkUniqueID NIGHT = 1011622525U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace DAYNIGHT

        namespace MARIOSTATE
        {
            static const AkUniqueID GROUP = 3891672790U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID ST_MARIODEAD = 3280622839U;
                static const AkUniqueID ST_MARIOLARGE = 1268394730U;
                static const AkUniqueID ST_MARIOSMALL = 3407194134U;
                static const AkUniqueID ST_MARIOSTAR = 2935428005U;
            } // namespace STATE
        } // namespace MARIOSTATE

    } // namespace STATES

    namespace SWITCHES
    {
        namespace SWITCHGROUP
        {
            static const AkUniqueID GROUP = 206060290U;

            namespace SWITCH
            {
                static const AkUniqueID DB_SWITCH_ONE = 1220551583U;
                static const AkUniqueID DB_SWITCH_TWO = 833827773U;
            } // namespace SWITCH
        } // namespace SWITCHGROUP

    } // namespace SWITCHES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID RTPC_MARIOSPEED = 2826881650U;
        static const AkUniqueID RTPC_TIMELEFT = 3058023719U;
        static const AkUniqueID TIMEOFDAY = 3729505769U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID BNK_MAIN = 1020463552U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
