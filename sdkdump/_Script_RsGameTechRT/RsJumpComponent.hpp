#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Matrix.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "RsHeroComponent.hpp"
namespace _Script_RsGameTechRT {
struct RsJumpSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_RsGameTechRT {
struct RsConstrainedJumpWeights;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsJumpComponent : public RsHeroComponent {
    private: char pad_180[0xa0]; public:
    _Script_RsGameTechRT::RsJumpSettings*& get_JumpSettings();
    static _Script_CoreUObject::Class* static_class();
    bool TryZTargetDoubleJump();
    bool TryWallJumpWithWallNormal(_Script_CoreUObject::Vector& WallNormal);
    bool TryWallJump();
    bool TryJumpInDirection(_Script_CoreUObject::Vector4 JumpDirection);
    bool TryJump();
    bool TryDoubleJump();
    void SetConstrainedJumpVelocityModifier(float NewModifier);
    void ResetDoubleJump();
    void ResetConstrainedJumpVelocityModifier();
    void OnJumpAscend();
    void OnJumpApex();
    void OnConstrainedJumpFinished(_Script_RsGameTechRT::RsHeroStateModifierDefinition* HeroStateModifier);
    void JumpAscend();
    void JumpApex();
    bool DoConstrainedJumpInDirection(void* JumpDirection, _Script_CoreUObject::Matrix JumpSpace, _Script_CoreUObject::Vector CurrentMovementVelocity, _Script_Engine::AnimMontage* JumpMontage);
    bool DoConstrainedJump(_Script_RsGameTechRT::RsConstrainedJumpWeights& jumpWeights, _Script_CoreUObject::Matrix JumpSpace, _Script_CoreUObject::Vector CurrentMovementVelocity, _Script_Engine::AnimMontage* JumpMontage);
}; // Size: 0x220
#pragma pack(pop)
}
