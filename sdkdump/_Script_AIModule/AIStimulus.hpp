#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIStimulus {
    private: char pad_0[0x48]; public:
    float& get_Age();
    float& get_ExpirationAge();
    float& get_Strength();
    void* get_StimulusLocation();
    void* get_ReceiverLocation();
    void* get_Tag();
    bool get_bSuccessfullySensed();
    void set_bSuccessfullySensed(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
