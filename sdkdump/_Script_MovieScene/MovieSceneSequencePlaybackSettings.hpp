#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSequencePlaybackSettings {
    private: char pad_0[0x40]; public:
    int32_t& get_LoopCount();
    float& get_Playrate();
    bool get_bRandomStartTime();
    void set_bRandomStartTime(bool value);
    float& get_StartTime();
    bool get_bRestoreState();
    void set_bRestoreState(bool value);
    bool get_bDisableMovementInput();
    void set_bDisableMovementInput(bool value);
    bool get_bDisableLookAtInput();
    void set_bDisableLookAtInput(bool value);
    bool get_bHidePlayer();
    void set_bHidePlayer(bool value);
    bool get_bHideHud();
    void set_bHideHud(bool value);
    bool get_bDisableCameraCuts();
    void set_bDisableCameraCuts(bool value);
    bool get_bPauseAtEnd();
    void set_bPauseAtEnd(bool value);
    _Script_CoreUObject::Object*& get_InstanceData();
    void* get_BindingOverrides();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
