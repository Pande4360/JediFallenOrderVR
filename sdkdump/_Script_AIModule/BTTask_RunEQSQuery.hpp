#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTTask_BlackboardBase.hpp"
namespace _Script_AIModule {
struct EnvQuery;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTTask_RunEQSQuery : public BTTask_BlackboardBase {
    private: char pad_98[0xb8]; public:
    _Script_AIModule::EnvQuery*& get_QueryTemplate();
    void* get_QueryParams();
    void* get_QueryConfig();
    void* get_RunMode();
    void* get_EQSQueryBlackboardKey();
    bool get_bUseBBKey();
    void set_bUseBBKey(bool value);
    void* get_EQSRequest();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
