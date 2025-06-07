#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_CopyPoseFromMesh : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0xb8]; public:
    void* get_SourceMeshComponent();
    bool get_bUseAttachedParent();
    void set_bUseAttachedParent(bool value);
    bool get_bCopyCurves();
    void set_bCopyCurves(bool value);
    bool get_bUseEditableBoneTransformsIfAvailable();
    void set_bUseEditableBoneTransformsIfAvailable(bool value);
    bool get_bDoNotUseCachedTransformsWhenInAnimationCustomMode();
    void set_bDoNotUseCachedTransformsWhenInAnimationCustomMode(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
