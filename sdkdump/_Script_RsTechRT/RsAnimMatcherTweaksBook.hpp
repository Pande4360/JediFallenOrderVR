#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsJSONTweaksBook.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsAnimMatcherTweaksBook : public RsJSONTweaksBook {
    private: char pad_70[0x30]; public:
    void* get_RequiredSize();
    void* get_AssetsRequiredSize();
    int32_t& get_ExternalVariablesCount();
    int32_t& get_AnimationAssetCount();
    int32_t& get_BlendGroupCount();
    int32_t& get_MoveCount();
    int32_t& get_BranchCount();
    int32_t& get_RootBranchesCount();
    int32_t& get_SharedBranchesCount();
    int32_t& get_ActionScriptsCount();
    int32_t& get_ScriptOperandCount();
    bool get_RegisterAllAssetsWithRoot();
    void set_RegisterAllAssetsWithRoot(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
