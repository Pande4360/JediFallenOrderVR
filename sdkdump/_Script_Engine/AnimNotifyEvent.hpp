#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimLinkableElement.hpp"
namespace _Script_Engine {
struct AnimNotify;
}
namespace _Script_Engine {
struct AnimNotifyState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNotifyEvent : public AnimLinkableElement {
    private: char pad_30[0x88]; public:
    float& get_DisplayTime();
    float& get_TriggerTimeOffset();
    float& get_EndTriggerTimeOffset();
    float& get_TriggerWeightThreshold();
    void* get_NotifyName();
    _Script_Engine::AnimNotify*& get_Notify();
    _Script_Engine::AnimNotifyState*& get_NotifyStateClass();
    float& get_Duration();
    void* get_EndLink();
    bool get_bConvertedFromBranchingPoint();
    void set_bConvertedFromBranchingPoint(bool value);
    void* get_MontageTickType();
    float& get_NotifyTriggerChance();
    void* get_NotifyFilterType();
    int32_t& get_NotifyFilterLOD();
    bool get_bTriggerOnDedicatedServer();
    void set_bTriggerOnDedicatedServer(bool value);
    bool get_bTriggerOnFollower();
    void set_bTriggerOnFollower(bool value);
    int32_t& get_TrackIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
