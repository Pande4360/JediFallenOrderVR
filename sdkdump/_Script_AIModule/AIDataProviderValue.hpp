#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Property;
}
namespace _Script_AIModule {
struct AIDataProvider;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIDataProviderValue {
    private: char pad_0[0x20]; public:
    _Script_CoreUObject::Property*& get_CachedProperty();
    _Script_AIModule::AIDataProvider*& get_DataBinding();
    void* get_DataField();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
