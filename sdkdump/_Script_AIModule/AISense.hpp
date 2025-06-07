#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_AIModule {
struct AIPerceptionSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISense : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    float& get_DefaultExpirationAge();
    void* get_NotifyType();
    bool get_bWantsNewPawnNotification();
    void set_bWantsNewPawnNotification(bool value);
    bool get_bAutoRegisterAllPawnsAsSources();
    void set_bAutoRegisterAllPawnsAsSources(bool value);
    _Script_AIModule::AIPerceptionSystem*& get_PerceptionSystemInstance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
