#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimationCompressionParametersForACLAlgorithm.hpp"
void* _Script_Engine::RsAnimationCompressionParametersForACLAlgorithm::get_CompressionLevel() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RsAnimationCompressionParametersForACLAlgorithm::get_SafetyFallbackThreshold() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::RsAnimationCompressionParametersForACLAlgorithm::get_DefaultVirtualVertexDistance() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::RsAnimationCompressionParametersForACLAlgorithm::get_SafeVirtualVertexDistance() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RsAnimationCompressionParametersForACLAlgorithm::get_ErrorThreshold() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::RsAnimationCompressionParametersForACLAlgorithm::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsAnimationCompressionParametersForACLAlgorithm");
    return result;
}
