#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_RsTechRT {
struct RsAnimMatcherTweaksBook;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct rsAnimMatcher : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0xa178]; public:
    void* get_TweakFile();
    _Script_RsTechRT::RsAnimMatcherTweaksBook*& get_Tweaks();
    float& get_TweenTime();
    bool get_SyncFromContext();
    void set_SyncFromContext(bool value);
    bool get_PropagateSyncToContext();
    void set_PropagateSyncToContext(bool value);
    void* get_Poses();
    void* get_Assets();
    void* get_DriverBool();
    void* get_DriverInt();
    void* get_DriverFloat();
    void* get_DriverBitStack();
    void* get_DriverBitfield();
    void* get_DriverRange();
    void* get_DriverName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa1a8
#pragma pack(pop)
}
