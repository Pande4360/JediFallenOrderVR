#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimationCompressionCommandletAlgorithmParametersProfile.hpp"
void* _Script_Engine::RsAnimationCompressionCommandletAlgorithmParametersProfile::get_ProfileName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RsAnimationCompressionCommandletAlgorithmParametersProfile::get_PerTrackAlgorithmParameters() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RsAnimationCompressionCommandletAlgorithmParametersProfile::get_RemoveLinearKeysAlgorithmParameters() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::RsAnimationCompressionCommandletAlgorithmParametersProfile::get_ACLAlgorithmParameters() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_Engine::RsAnimationCompressionCommandletAlgorithmParametersProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsAnimationCompressionCommandletAlgorithmParametersProfile");
    return result;
}
