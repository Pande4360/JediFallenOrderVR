#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_SwGame {
struct ButtonMashType;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwButtonMashConfiguration {
    private: char pad_0[0xa8]; public:
    void* get_ButtonAction();
    int32_t& get_NumPressToSucceed();
    bool get_bDeferEvents();
    void set_bDeferEvents(bool value);
    void* get_DurationTypeEnum();
    float& get_Duration();
    float& get_AutoSucceedDuration();
    void* get_NotifyIdentifier();
    _Script_Engine::AnimMontage*& get_Montage();
    void* get_MontageSection();
    int32_t& get_SyncGroupID();
    void* get_SyncGroupData();
    void* get_OnStartEvent();
    void* get_OnButtonPressed();
    void* get_OnSucceed();
    void* get_OnFail();
    void* get_OnEnd();
    _Script_SwGame::ButtonMashType*& get_DurationType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
