#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NavAreaMeta.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavAreaMeta_SwitchByAgent : public NavAreaMeta {
    private: char pad_48[0x80]; public:
    void* get_Agent0Area();
    void* get_Agent1Area();
    void* get_Agent2Area();
    void* get_Agent3Area();
    void* get_Agent4Area();
    void* get_Agent5Area();
    void* get_Agent6Area();
    void* get_Agent7Area();
    void* get_Agent8Area();
    void* get_Agent9Area();
    void* get_Agent10Area();
    void* get_Agent11Area();
    void* get_Agent12Area();
    void* get_Agent13Area();
    void* get_Agent14Area();
    void* get_Agent15Area();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
