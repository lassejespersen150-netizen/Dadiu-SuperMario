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
        static const AkUniqueID EVT_MARIOALIVE = 1048818656U;
        static const AkUniqueID EVT_MARIODEAD = 2306134771U;
        static const AkUniqueID MUS_LEVEL101 = 2723243971U;
        static const AkUniqueID MUS_LEVEL102 = 2723243968U;
        static const AkUniqueID MUS_PLAYMAINPLAYLIST = 2115743526U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_LP = 2517391619U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS = 2534169461U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P100 = 2834276857U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P200 = 2935089634U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P300 = 3035902443U;
        static const AkUniqueID PLAY_DB_SYNTH_2D_OS_P400 = 3136715220U;
        static const AkUniqueID PLAY_DB_SYNTH_200HZ_2D_LP = 318505690U;
        static const AkUniqueID PLAY_DB_SYNTH_400HZ_3D_LP = 3266186833U;
        static const AkUniqueID PLAY_FLAGPOLE = 3011457342U;
        static const AkUniqueID PLAY_PIPE_IDLE = 653287783U;
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

        namespace LEVELS
        {
            static const AkUniqueID GROUP = 2678230316U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID ST_LEVEL_101 = 2673545494U;
                static const AkUniqueID ST_LEVEL_102 = 2673545493U;
                static const AkUniqueID ST_LEVEL_103 = 2673545492U;
                static const AkUniqueID ST_LEVEL_104 = 2673545491U;
            } // namespace STATE
        } // namespace LEVELS

        namespace MARIOLIVES
        {
            static const AkUniqueID GROUP = 2055629040U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID ST_MARIOLIVE_00 = 826997358U;
                static const AkUniqueID ST_MARIOLIVE_01 = 826997359U;
                static const AkUniqueID ST_MARIOLIVE_02 = 826997356U;
                static const AkUniqueID ST_MARIOLIVE_03 = 826997357U;
            } // namespace STATE
        } // namespace MARIOLIVES

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
        namespace SW_BLOCK
        {
            static const AkUniqueID GROUP = 3347557693U;

            namespace SWITCH
            {
                static const AkUniqueID BREAK = 941442534U;
                static const AkUniqueID IMPACT = 3257506471U;
            } // namespace SWITCH
        } // namespace SW_BLOCK

        namespace SW_PLAYERSIZE
        {
            static const AkUniqueID GROUP = 1608312894U;

            namespace SWITCH
            {
                static const AkUniqueID BIG = 647611021U;
                static const AkUniqueID SMALL = 1846755610U;
            } // namespace SWITCH
        } // namespace SW_PLAYERSIZE

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
        static const AkUniqueID MARIODISTANCETOFLAGPOLE = 2489148713U;
        static const AkUniqueID MARIODISTANCETOPIPE = 4279643429U;
        static const AkUniqueID MARIOJUMPAIR = 2252070993U;
        static const AkUniqueID MARIOSPEED = 2335757700U;
        static const AkUniqueID TIMELEFT = 2486342905U;
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
