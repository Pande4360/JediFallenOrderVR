#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct InterpData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MatineeActor : public Actor {
    private: char pad_360[0xa8]; public:
    _Script_Engine::InterpData*& get_MatineeData();
    void* get_MatineeControllerName();
    float& get_Playrate();
    bool get_bPlayOnLevelLoad();
    void set_bPlayOnLevelLoad(bool value);
    bool get_bForceStartPos();
    void set_bForceStartPos(bool value);
    float& get_ForceStartPosition();
    bool get_bLooping();
    void set_bLooping(bool value);
    bool get_bRewindOnPlay();
    void set_bRewindOnPlay(bool value);
    bool get_bNoResetOnRewind();
    void set_bNoResetOnRewind(bool value);
    bool get_bRewindIfAlreadyPlaying();
    void set_bRewindIfAlreadyPlaying(bool value);
    bool get_bDisableRadioFilter();
    void set_bDisableRadioFilter(bool value);
    bool get_bClientSideOnly();
    void set_bClientSideOnly(bool value);
    bool get_bSkipUpdateIfNotVisible();
    void set_bSkipUpdateIfNotVisible(bool value);
    bool get_bIsSkippable();
    void set_bIsSkippable(bool value);
    int32_t& get_PreferredSplitScreenNum();
    bool get_bDisableMovementInput();
    void set_bDisableMovementInput(bool value);
    bool get_bDisableLookAtInput();
    void set_bDisableLookAtInput(bool value);
    bool get_bHidePlayer();
    void set_bHidePlayer(bool value);
    bool get_bHideHud();
    void set_bHideHud(bool value);
    void* get_GroupActorInfos();
    bool get_bShouldShowGore();
    void set_bShouldShowGore(bool value);
    void* get_GroupInst();
    void* get_CameraCuts();
    bool get_bIsPlaying();
    void set_bIsPlaying(bool value);
    bool get_bReversePlayback();
    void set_bReversePlayback(bool value);
    bool get_bPaused();
    void set_bPaused(bool value);
    bool get_bPendingStop();
    void set_bPendingStop(bool value);
    float& get_InterpPosition();
    void* get_ReplicationForceIsPlaying();
    void* get_OnPlay();
    void* get_OnStop();
    void* get_OnPause();
    static _Script_CoreUObject::Class* static_class();
    void Stop();
    void SetPosition(float NewPosition, bool bJump);
    void SetLoopingState(bool bNewLooping);
    void Reverse();
    void Play();
    void Pause();
    void EnableGroupByName(void* GroupName, bool bEnable);
    void ChangePlaybackDirection();
}; // Size: 0x408
#pragma pack(pop)
}
