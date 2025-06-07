#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\BlendSpaceBase.hpp"
#include "RsAIBlendspaceAnimDescriptor.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIBlendspaceAnimDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIBlendspaceAnimDescriptor");
    return result;
}
_Script_Engine::BlendSpaceBase*& _Script_RsGameTechRT::RsAIBlendspaceAnimDescriptor::get_BlendSpace() {
    return *(_Script_Engine::BlendSpaceBase**)((uintptr_t)this + 0x0);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsAIBlendspaceAnimDescriptor::get_Animation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsAIBlendspaceAnimDescriptor::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::RsAIBlendspaceAnimDescriptor::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
