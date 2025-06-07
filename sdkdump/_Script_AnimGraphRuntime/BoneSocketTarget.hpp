#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct BoneSocketTarget {
    private: char pad_0[0x60]; public:
    bool get_bUseSocket();
    void set_bUseSocket(bool value);
    void* get_BoneReference();
    void* get_SocketReference();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
