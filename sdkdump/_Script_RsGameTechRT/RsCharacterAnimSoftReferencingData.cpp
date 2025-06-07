#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsCharacterAnimDataBase.hpp"
#include "RsCharacterAnimSoftReferencingData.hpp"
void* _Script_RsGameTechRT::RsCharacterAnimSoftReferencingData::get_AnimationAssetSoftPtr() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsCharacterAnimSoftReferencingData::get_AnimAsset() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterAnimSoftReferencingData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCharacterAnimSoftReferencingData");
    return result;
}
