#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct InvalidationBox : public ContentWidget {
    private: char pad_118[0x18]; public:
    bool get_bCanCache();
    void set_bCanCache(bool value);
    bool get_CacheRelativeTransforms();
    void set_CacheRelativeTransforms(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetCanCache(bool CanCache);
    void InvalidateCache();
    bool GetCanCache();
}; // Size: 0x130
#pragma pack(pop)
}
