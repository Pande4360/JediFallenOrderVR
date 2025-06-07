#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsEvent.hpp"
#include "RsTopology.hpp"
#include "RsUID.hpp"
#include "rsActor.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsEvent");
    return result;
}
bool _Script_RsTechRT::RsEvent::BindEventToTopologyChange(_Script_RsTechRT::RsUID& worldEventID, _Script_RsTechRT::rsActor* Target, _Script_RsTechRT::RsTopology& topologyPatch, void* eventDelegate, bool continuous) {
    return;
}
bool _Script_RsTechRT::RsEvent::UnbindEventByWorldEventID(_Script_RsTechRT::RsUID& worldEventID) {
    return;
}
bool _Script_RsTechRT::RsEvent::BindEventToDirectionChange(_Script_RsTechRT::RsUID& worldEventID, _Script_Engine::Actor* Target, void* eventDelegate, _Script_CoreUObject::Vector directionReference, bool continuous) {
    return;
}
