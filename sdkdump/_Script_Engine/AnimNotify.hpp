#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNotify : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    bool get_bAlwaysProcessOnBegin();
    void set_bAlwaysProcessOnBegin(bool value);
    void* get_RequiredSignificance();
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
    void* GetNotifyName();
}; // Size: 0x38
#pragma pack(pop)
}
