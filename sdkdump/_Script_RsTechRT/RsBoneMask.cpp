#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\Skeleton.hpp"
#include "RsBoneMask.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsBoneMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsBoneMask");
    return result;
}
_Script_Engine::Skeleton*& _Script_RsTechRT::RsBoneMask::get_Skeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x50);
}
void* _Script_RsTechRT::RsBoneMask::get_BoneValues() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_RsTechRT::RsBoneMask::get_CachedBoneValues() {
    return (void*)((uintptr_t)this + 0x68);
}
