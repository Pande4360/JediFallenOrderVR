#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NavRelevantComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavLinkCustomComponent : public NavRelevantComponent {
    private: char pad_1a0[0xa8]; public:
    void* get_NavLinkUserId();
    void* get_EnabledAreaClass();
    void* get_DisabledAreaClass();
    void* get_LinkRelativeStart();
    void* get_LinkRelativeEnd();
    void* get_LinkDirection();
    bool get_bLinkEnabled();
    void set_bLinkEnabled(bool value);
    bool get_bNotifyWhenEnabled();
    void set_bNotifyWhenEnabled(bool value);
    bool get_bNotifyWhenDisabled();
    void set_bNotifyWhenDisabled(bool value);
    bool get_bCreateBoxObstacle();
    void set_bCreateBoxObstacle(bool value);
    void* get_ObstacleOffset();
    void* get_ObstacleExtent();
    void* get_ObstacleAreaClass();
    float& get_BroadcastRadius();
    float& get_BroadcastInterval();
    void* get_BroadcastChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x248
#pragma pack(pop)
}
