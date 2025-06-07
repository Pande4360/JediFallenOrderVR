#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAIResource.hpp"
#include "RsAIResourceProviderId.hpp"
#include "RsAIResource_BlueprintBase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIResource_BlueprintBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIResource_BlueprintBase");
    return result;
}
bool _Script_RsGameTechRT::RsAIResource_BlueprintBase::ReceiveTryAcquireResource(_Script_CoreUObject::Object* Requester, _Script_RsGameTechRT::RsAIResourceProviderId& ProviderId) {
    return;
}
void _Script_RsGameTechRT::RsAIResource_BlueprintBase::ReceiveTick(float DeltaTime) {
    return;
}
void _Script_RsGameTechRT::RsAIResource_BlueprintBase::ReceiveStopPlay() {
    return;
}
void _Script_RsGameTechRT::RsAIResource_BlueprintBase::ReceiveStartPlay() {
    return;
}
void _Script_RsGameTechRT::RsAIResource_BlueprintBase::ReceiveResourceReleased(_Script_CoreUObject::Object* Owner, _Script_RsGameTechRT::RsAIResourceProviderId& ProviderId) {
    return;
}
void _Script_RsGameTechRT::RsAIResource_BlueprintBase::ReceiveResourceAcquired(_Script_CoreUObject::Object* Owner, _Script_RsGameTechRT::RsAIResourceProviderId& ProviderId) {
    return;
}
