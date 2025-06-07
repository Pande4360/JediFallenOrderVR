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
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNotifyEventReference {
    private: char pad_0[0x18]; public:
    _Script_CoreUObject::Object*& get_NotifySource();
    _Script_Engine::AnimMontage*& get_SourceMontage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
