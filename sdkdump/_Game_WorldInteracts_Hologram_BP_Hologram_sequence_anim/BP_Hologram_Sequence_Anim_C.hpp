#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Hologram_BP_Hologram\BP_Hologram_C.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Game_WorldInteracts_Hologram_BP_Hologram_sequence_anim {
#pragma pack(push, 1)
struct BP_Hologram_Sequence_Anim_C : public _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C {
    private: char pad_9b8[0x2f8]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMeshCust();
    _Script_Engine::SkeletalMeshComponent*& get_Face2();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh16();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh15();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh14();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh13();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh12();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh11();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh10();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::ChildActorComponent*& get_Char_BP_Component();
    _Script_Engine::SkeletalMeshComponent*& get_Character2();
    _Script_Engine::SkeletalMeshComponent*& get_face();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh7();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh6();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh5();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh4();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh3();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh2();
    _Script_Engine::SkeletalMeshComponent*& get_skeletalMesh1();
    float& get_sceneScale();
    int32_t& get_animIndex();
    void* get_char1_BP();
    void* get_char1_AnimOffset();
    void* get_characterAnims_char1();
    void* get_faceAnims_char1();
    void* get_perAnimOffset_char1();
    void* get_skeletalMeshSlots_char1();
    void* get_char2_BP();
    void* get_characterAnims_char2();
    void* get_faceAnims_char2();
    void* get_perAnimOffset_char2();
    void* get_skeletalMeshSlots_char2();
    int32_t& get_skeletalMeshCounter();
    _Script_Engine::SkeletalMesh*& get_custSkeletalMesh();
    void* get_custSkeletalMeshAnims();
    void* get_custSkeletalMeshAttachSocket();
    void* get_custSkeletalMeshLocationOffset();
    void* get_custSkeletalMeshRotationOffset();
    void* get_perAnimHoloOffset();
    void* get_relativeLocation_char1();
    void* get_relativeLocation_char2();
    _Script_Engine::Actor*& get_LevelSequenceActor();
    void* get_selfTransform();
    void* get_sequenceTransform();
    void* get_OffsetTransform();
    void* get_perAnimFOV();
    void* get_hologramWorldLocation();
    void* get_char1WL();
    void* get_char2WL();
    void* get_perAnimOffset_customSkeletalMesh();
    static _Script_CoreUObject::Class* static_class();
    void playAnim_Cust(void*& Meshes, _Script_Engine::AnimationAsset* meshAnim, _Script_Engine::SkeletalMeshComponent* face, _Script_Engine::AnimationAsset* faceAnim);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void PlayAnimationIndex(int32_t animNumber);
    void PlayAnimationNext();
    void ExecuteUbergraph_BP_Hologram_Sequence_Anim(int32_t EntryPoint);
}; // Size: 0xcb0
#pragma pack(pop)
}
