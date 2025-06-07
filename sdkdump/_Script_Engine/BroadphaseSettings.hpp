#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BroadphaseSettings {
    private: char pad_0[0x24]; public:
    bool get_bUseMBPOnClient();
    void set_bUseMBPOnClient(bool value);
    bool get_bUseMBPOnServer();
    void set_bUseMBPOnServer(bool value);
    void* get_MBPBounds();
    void* get_MBPNumSubdivs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
