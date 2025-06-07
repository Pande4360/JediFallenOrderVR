#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsLightTriggerComponent : public ActorComponent {
    private: char pad_170[0xb8]; public:
    void* get_Events();
    void* get_MaterialAdjustmentActors();
    bool get_bSaveBeginPlayState();
    void set_bSaveBeginPlayState(bool value);
    void* get_MaterialInstances();
    void* get_ComponentPathMaterialMappings();
    bool get_bHandledBeginPlayEvent();
    void set_bHandledBeginPlayEvent(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool RespondsToEvent(void* EventName);
    bool HandleEvent(void* EventName, bool bMatchStartingIntensity);
    void* GetActiveEvent();
}; // Size: 0x228
#pragma pack(pop)
}
