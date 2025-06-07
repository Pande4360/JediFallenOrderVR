#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsSimpleAnimationDataBase.hpp"
#include "RsSimpleSequenceOrMontageData.hpp"
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSimpleSequenceOrMontageData::get_Animation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSimpleSequenceOrMontageData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSimpleSequenceOrMontageData");
    return result;
}
