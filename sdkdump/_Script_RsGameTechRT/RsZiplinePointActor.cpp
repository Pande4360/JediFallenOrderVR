#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsZiplinePointActor.hpp"
#include "RsZiplinePointComponent.hpp"
_Script_RsGameTechRT::RsZiplinePointComponent*& _Script_RsGameTechRT::RsZiplinePointActor::get_ZiplinePointComponent() {
    return *(_Script_RsGameTechRT::RsZiplinePointComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsZiplinePointActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsZiplinePointActor");
    return result;
}
_Script_RsGameTechRT::RsZiplinePointComponent* _Script_RsGameTechRT::RsZiplinePointActor::GetZiplinePointComponent() {
    return;
}
