#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsDynamicDeformerBase.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsDynamicDeformerParticleSystem : public RsDynamicDeformerBase {
    private: char pad_360[0x8]; public:
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    static _Script_CoreUObject::Class* static_class();
    void OnParticleSystemFinished(_Script_Engine::ParticleSystemComponent* FinishedComponent);
}; // Size: 0x368
#pragma pack(pop)
}
