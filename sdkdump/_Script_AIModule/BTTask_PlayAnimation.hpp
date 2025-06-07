#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTTaskNode.hpp"
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_AIModule {
struct BehaviorTreeComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTTask_PlayAnimation : public BTTaskNode {
    private: char pad_70[0x40]; public:
    _Script_Engine::AnimationAsset*& get_AnimationToPlay();
    bool get_bLooping();
    void set_bLooping(bool value);
    bool get_bNonBlocking();
    void set_bNonBlocking(bool value);
    _Script_AIModule::BehaviorTreeComponent*& get_MyOwnerComp();
    _Script_Engine::SkeletalMeshComponent*& get_CachedSkelMesh();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
