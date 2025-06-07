#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ClientReceiveData {
    private: char pad_0[0x40]; public:
    _Script_Engine::PlayerController*& get_LocalPC();
    void* get_MessageType();
    int32_t& get_MessageIndex();
    void* get_MessageString();
    _Script_Engine::PlayerState*& get_RelatedPlayerState_1();
    _Script_Engine::PlayerState*& get_RelatedPlayerState_2();
    _Script_CoreUObject::Object*& get_OptionalObject();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
