#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AIModule {
struct EnvQuery;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EQSParametrizedQueryExecutionRequest {
    private: char pad_0[0x48]; public:
    _Script_AIModule::EnvQuery*& get_QueryTemplate();
    void* get_QueryConfig();
    void* get_EQSQueryBlackboardKey();
    void* get_RunMode();
    bool get_bUseBBKeyForQueryTemplate();
    void set_bUseBBKeyForQueryTemplate(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
