#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimMatcherTweaksBook.hpp"
#include "RsJSONTweaksBook.hpp"
void* _Script_RsTechRT::RsAnimMatcherTweaksBook::get_RequiredSize() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsTechRT::RsAnimMatcherTweaksBook::get_AssetsRequiredSize() {
    return (void*)((uintptr_t)this + 0x74);
}
int32_t& _Script_RsTechRT::RsAnimMatcherTweaksBook::get_MoveCount() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
int32_t& _Script_RsTechRT::RsAnimMatcherTweaksBook::get_ExternalVariablesCount() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
int32_t& _Script_RsTechRT::RsAnimMatcherTweaksBook::get_AnimationAssetCount() {
    return *(int32_t*)((uintptr_t)this + 0x7c);
}
int32_t& _Script_RsTechRT::RsAnimMatcherTweaksBook::get_BlendGroupCount() {
    return *(int32_t*)((uintptr_t)this + 0x80);
}
int32_t& _Script_RsTechRT::RsAnimMatcherTweaksBook::get_BranchCount() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
int32_t& _Script_RsTechRT::RsAnimMatcherTweaksBook::get_RootBranchesCount() {
    return *(int32_t*)((uintptr_t)this + 0x8c);
}
int32_t& _Script_RsTechRT::RsAnimMatcherTweaksBook::get_SharedBranchesCount() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
int32_t& _Script_RsTechRT::RsAnimMatcherTweaksBook::get_ActionScriptsCount() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
int32_t& _Script_RsTechRT::RsAnimMatcherTweaksBook::get_ScriptOperandCount() {
    return *(int32_t*)((uintptr_t)this + 0x98);
}
bool _Script_RsTechRT::RsAnimMatcherTweaksBook::get_RegisterAllAssetsWithRoot() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsAnimMatcherTweaksBook::set_RegisterAllAssetsWithRoot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsAnimMatcherTweaksBook::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsAnimMatcherTweaksBook");
    return result;
}
