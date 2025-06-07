#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlendSpaceBase.hpp"
#include "RsSimpleAnimationDataBase.hpp"
#include "RsSimpleBlendspaceData.hpp"
_Script_Engine::BlendSpaceBase*& _Script_RsGameTechRT::RsSimpleBlendspaceData::get_Animation() {
    return *(_Script_Engine::BlendSpaceBase**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSimpleBlendspaceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSimpleBlendspaceData");
    return result;
}
