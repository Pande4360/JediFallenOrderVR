#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTService.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBTService_TeamConversation : public _Script_AIModule::BTService {
    private: char pad_70[0x60]; public:
    static _Script_CoreUObject::Class* static_class();
    void OnConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation);
    void OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
}; // Size: 0xd0
#pragma pack(pop)
}
