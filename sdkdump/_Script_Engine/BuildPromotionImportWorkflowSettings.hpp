#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BuildPromotionImportWorkflowSettings {
    private: char pad_0[0x150]; public:
    void* get_Diffuse();
    void* get_Normal();
    void* get_StaticMesh();
    void* get_ReimportStaticMesh();
    void* get_BlendShapeMesh();
    void* get_MorphMesh();
    void* get_SkeletalMesh();
    void* get_Animation();
    void* get_Sound();
    void* get_SurroundSound();
    void* get_OtherAssetsToImport();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
