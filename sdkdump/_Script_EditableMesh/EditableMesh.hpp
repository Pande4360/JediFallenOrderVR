#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\BoxSphereBounds.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Plane.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SubdivisionLimitData.hpp"
#include "..\_Script_MeshDescription\EdgeID.hpp"
#include "..\_Script_MeshDescription\MeshTriangle.hpp"
#include "..\_Script_MeshDescription\PolygonGroupID.hpp"
#include "..\_Script_MeshDescription\PolygonID.hpp"
#include "..\_Script_MeshDescription\VertexID.hpp"
#include "..\_Script_MeshDescription\VertexInstanceID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_EditableMesh {
#pragma pack(push, 1)
struct EditableMesh : public _Script_CoreUObject::Object {
    private: char pad_28[0x5f8]; public:
    void* get_Adapters();
    int32_t& get_TextureCoordinateCount();
    int32_t& get_PendingCompactCounter();
    int32_t& get_SubdivisionCount();
    static _Script_CoreUObject::Class* static_class();
    void WeldVertices(void*& VertexIDs, _Script_MeshDescription::VertexID& OutNewVertexID);
    void TryToRemoveVertex(_Script_MeshDescription::VertexID VertexID, bool& bOutWasVertexRemoved, _Script_MeshDescription::EdgeID& OutNewEdgeID);
    void TryToRemovePolygonEdge(_Script_MeshDescription::EdgeID EdgeID, bool& bOutWasEdgeRemoved, _Script_MeshDescription::PolygonID& OutNewPolygonID);
    void TriangulatePolygons(void*& PolygonIDs, void*& OutNewTrianglePolygons);
    void TessellatePolygons(void*& PolygonIDs, void* TriangleTessellationMode, void*& OutNewPolygonIDs);
    void StartModification(void* MeshModificationType, void* MeshTopologyChange);
    void SplitPolygons(void*& PolygonsToSplit, void*& OutNewEdgeIDs);
    void SplitEdge(_Script_MeshDescription::EdgeID EdgeID, void*& Splits, void*& OutNewVertexIDs);
    void SetVerticesCornerSharpness(void*& VertexIDs, void*& VerticesNewCornerSharpness);
    void SetVerticesAttributes(void*& AttributesForVertices);
    void SetVertexInstancesAttributes(void*& AttributesForVertexInstances);
    void SetTextureCoordinateCount(int32_t NumTexCoords);
    void SetSubdivisionCount(int32_t NewSubdivisionCount);
    void SetPolygonsVertexAttributes(void*& VertexAttributesForPolygons);
    void SetEdgesVertices(void*& VerticesForEdges);
    void SetEdgesHardnessAutomatically(void*& EdgeIDs, float MaxDotProductForSoftEdge);
    void SetEdgesHardness(void*& EdgeIDs, void*& EdgesNewIsHard);
    void SetEdgesCreaseSharpness(void*& EdgeIDs, void*& EdgesNewCreaseSharpness);
    void SetEdgesAttributes(void*& AttributesForEdges);
    void SetAllowUndo(bool bInAllowUndo);
    void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);
    void SetAllowCompact(bool bInAllowCompact);
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(_Script_CoreUObject::Vector LineSegmentStart, _Script_CoreUObject::Vector LineSegmentEnd, void*& OutPolygons);
    void SearchSpatialDatabaseForPolygonsInVolume(void*& Planes, void*& OutPolygons);
    _Script_EditableMesh::EditableMesh* RevertInstance();
    void Revert();
    void RemovePolygonPerimeterVertices(_Script_MeshDescription::PolygonID PolygonID, int32_t FirstVertexNumberToRemove, int32_t NumVerticesToRemove, bool bDeleteOrphanedVertexInstances);
    void RebuildRenderMesh();
    void QuadrangulateMesh(void*& OutNewPolygonIDs);
    void PropagateInstanceChanges();
    void MoveVertices(void*& VerticesToMove);
    _Script_MeshDescription::VertexID MakeVertexID(int32_t VertexIndex);
    _Script_MeshDescription::PolygonID MakePolygonID(int32_t PolygonIndex);
    _Script_MeshDescription::PolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex);
    _Script_MeshDescription::EdgeID MakeEdgeID(int32_t EdgeIndex);
    bool IsValidVertex(_Script_MeshDescription::VertexID VertexID);
    bool IsValidPolygonGroup(_Script_MeshDescription::PolygonGroupID PolygonGroupID);
    bool IsValidPolygon(_Script_MeshDescription::PolygonID PolygonID);
    bool IsValidEdge(_Script_MeshDescription::EdgeID EdgeID);
    bool IsUndoAllowed();
    bool IsSpatialDatabaseAllowed();
    bool IsPreviewingSubdivisions();
    bool IsOrphanedVertex(_Script_MeshDescription::VertexID VertexID);
    bool IsCompactAllowed();
    bool IsCommittedAsInstance();
    bool IsCommitted();
    bool IsBeingModified();
    _Script_MeshDescription::VertexID InvalidVertexID();
    _Script_MeshDescription::PolygonID InvalidPolygonID();
    _Script_MeshDescription::PolygonGroupID InvalidPolygonGroupID();
    _Script_MeshDescription::EdgeID InvalidEdgeID();
    void InsetPolygons(void*& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, void* Mode, void*& OutNewCenterPolygonIDs, void*& OutNewSidePolygonIDs);
    void InsertPolygonPerimeterVertices(_Script_MeshDescription::PolygonID PolygonID, int32_t InsertBeforeVertexNumber, void*& VerticesToInsert);
    void InsertEdgeLoop(_Script_MeshDescription::EdgeID EdgeID, void*& Splits, void*& OutNewEdgeIDs);
    void InitializeAdapters();
    _Script_MeshDescription::EdgeID GetVertexPairEdge(_Script_MeshDescription::VertexID VertexID, _Script_MeshDescription::VertexID NextVertexID, bool& bOutEdgeWindingIsReversed);
    _Script_MeshDescription::VertexID GetVertexInstanceVertex(_Script_MeshDescription::VertexInstanceID VertexInstanceID);
    int32_t GetVertexInstanceCount();
    void GetVertexInstanceConnectedPolygons(_Script_MeshDescription::VertexInstanceID VertexInstanceID, void*& OutConnectedPolygonIDs);
    int32_t GetVertexInstanceConnectedPolygonCount(_Script_MeshDescription::VertexInstanceID VertexInstanceID);
    _Script_MeshDescription::PolygonID GetVertexInstanceConnectedPolygon(_Script_MeshDescription::VertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber);
    int32_t GetVertexCount();
    void GetVertexConnectedPolygons(_Script_MeshDescription::VertexID VertexID, void*& OutConnectedPolygonIDs);
    void GetVertexConnectedEdges(_Script_MeshDescription::VertexID VertexID, void*& OutConnectedEdgeIDs);
    int32_t GetVertexConnectedEdgeCount(_Script_MeshDescription::VertexID VertexID);
    _Script_MeshDescription::EdgeID GetVertexConnectedEdge(_Script_MeshDescription::VertexID VertexID, int32_t ConnectedEdgeNumber);
    void GetVertexAdjacentVertices(_Script_MeshDescription::VertexID VertexID, void*& OutAdjacentVertexIDs);
    int32_t GetTextureCoordinateCount();
    _Script_EditableMesh::SubdivisionLimitData GetSubdivisionLimitData();
    int32_t GetSubdivisionCount();
    int32_t GetPolygonTriangulatedTriangleCount(_Script_MeshDescription::PolygonID PolygonID);
    _Script_MeshDescription::MeshTriangle GetPolygonTriangulatedTriangle(_Script_MeshDescription::PolygonID PolygonID, int32_t PolygonTriangleNumber);
    void GetPolygonPerimeterVertices(_Script_MeshDescription::PolygonID PolygonID, void*& OutPolygonPerimeterVertexIDs);
    void GetPolygonPerimeterVertexInstances(_Script_MeshDescription::PolygonID PolygonID, void*& OutPolygonPerimeterVertexInstanceIDs);
    _Script_MeshDescription::VertexInstanceID GetPolygonPerimeterVertexInstance(_Script_MeshDescription::PolygonID PolygonID, int32_t PolygonVertexNumber);
    int32_t GetPolygonPerimeterVertexCount(_Script_MeshDescription::PolygonID PolygonID);
    _Script_MeshDescription::VertexID GetPolygonPerimeterVertex(_Script_MeshDescription::PolygonID PolygonID, int32_t PolygonVertexNumber);
    void GetPolygonPerimeterEdges(_Script_MeshDescription::PolygonID PolygonID, void*& OutPolygonPerimeterEdgeIDs);
    int32_t GetPolygonPerimeterEdgeCount(_Script_MeshDescription::PolygonID PolygonID);
    _Script_MeshDescription::EdgeID GetPolygonPerimeterEdge(_Script_MeshDescription::PolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon);
    _Script_MeshDescription::PolygonID GetPolygonInGroup(_Script_MeshDescription::PolygonGroupID PolygonGroupID, int32_t PolygonNumber);
    void GetPolygonHoleVertices(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, void*& OutHoleVertexIDs);
    void GetPolygonHoleVertexInstances(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, void*& OutHoleVertexInstanceIDs);
    _Script_MeshDescription::VertexInstanceID GetPolygonHoleVertexInstance(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, int32_t PolygonVertexNumber);
    int32_t GetPolygonHoleVertexCount(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber);
    _Script_MeshDescription::VertexID GetPolygonHoleVertex(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, int32_t PolygonVertexNumber);
    void GetPolygonHoleEdges(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, void*& OutHoleEdgeIDs);
    int32_t GetPolygonHoleEdgeCount(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber);
    _Script_MeshDescription::EdgeID GetPolygonHoleEdge(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, int32_t HoleEdgeNumber);
    int32_t GetPolygonHoleCount(_Script_MeshDescription::PolygonID PolygonID);
    int32_t GetPolygonGroupCount();
    int32_t GetPolygonCountInGroup(_Script_MeshDescription::PolygonGroupID PolygonGroupID);
    int32_t GetPolygonCount();
    void GetPolygonAdjacentPolygons(_Script_MeshDescription::PolygonID PolygonID, void*& OutAdjacentPolygons);
    _Script_MeshDescription::PolygonGroupID GetGroupForPolygon(_Script_MeshDescription::PolygonID PolygonID);
    _Script_MeshDescription::PolygonGroupID GetFirstValidPolygonGroup();
    void GetEdgeVertices(_Script_MeshDescription::EdgeID EdgeID, _Script_MeshDescription::VertexID& OutEdgeVertexID0, _Script_MeshDescription::VertexID& OutEdgeVertexID1);
    _Script_MeshDescription::VertexID GetEdgeVertex(_Script_MeshDescription::EdgeID EdgeID, int32_t EdgeVertexNumber);
    _Script_MeshDescription::EdgeID GetEdgeThatConnectsVertices(_Script_MeshDescription::VertexID VertexID0, _Script_MeshDescription::VertexID VertexID1);
    void GetEdgeLoopElements(_Script_MeshDescription::EdgeID EdgeID, void*& EdgeLoopIDs);
    int32_t GetEdgeCount();
    void GetEdgeConnectedPolygons(_Script_MeshDescription::EdgeID EdgeID, void*& OutConnectedPolygonIDs);
    int32_t GetEdgeConnectedPolygonCount(_Script_MeshDescription::EdgeID EdgeID);
    _Script_MeshDescription::PolygonID GetEdgeConnectedPolygon(_Script_MeshDescription::EdgeID EdgeID, int32_t ConnectedPolygonNumber);
    void GeneratePolygonTangentsAndNormals(void*& PolygonIDs);
    void FlipPolygons(void*& PolygonIDs);
    int32_t FindPolygonPerimeterVertexNumberForVertex(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::VertexID VertexID);
    int32_t FindPolygonPerimeterEdgeNumberForVertices(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::VertexID EdgeVertexID0, _Script_MeshDescription::VertexID EdgeVertexID1);
    void FindPolygonLoop(_Script_MeshDescription::EdgeID EdgeID, void*& OutEdgeLoopEdgeIDs, void*& OutFlippedEdgeIDs, void*& OutReversedEdgeIDPathToTake, void*& OutPolygonIDsToSplit);
    int32_t FindPolygonHoleVertexNumberForVertex(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, _Script_MeshDescription::VertexID VertexID);
    int32_t FindPolygonHoleEdgeNumberForVertices(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, _Script_MeshDescription::VertexID EdgeVertexID0, _Script_MeshDescription::VertexID EdgeVertexID1);
    void ExtrudePolygons(void*& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, void*& OutNewExtrudedFrontPolygons);
    void ExtendVertices(void*& VertexIDs, bool bOnlyExtendClosestEdge, _Script_CoreUObject::Vector ReferencePosition, void*& OutNewExtendedVertexIDs);
    void ExtendEdges(void*& EdgeIDs, bool bWeldNeighbors, void*& OutNewExtendedEdgeIDs);
    void EndModification(bool bFromUndo);
    void DeleteVertexInstances(void*& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);
    void DeleteVertexAndConnectedEdgesAndPolygons(_Script_MeshDescription::VertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
    void DeletePolygons(void*& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
    void DeletePolygonGroups(void*& PolygonGroupIDs);
    void DeleteOrphanVertices(void*& VertexIDsToDelete);
    void DeleteEdges(void*& EdgeIDsToDelete, bool bDeleteOrphanedVertices);
    void DeleteEdgeAndConnectedPolygons(_Script_MeshDescription::EdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
    void CreateVertices(void*& VerticesToCreate, void*& OutNewVertexIDs);
    void CreateVertexInstances(void*& VertexInstancesToCreate, void*& OutNewVertexInstanceIDs);
    void CreatePolygons(void*& PolygonsToCreate, void*& OutNewPolygonIDs, void*& OutNewEdgeIDs);
    void CreatePolygonGroups(void*& PolygonGroupsToCreate, void*& OutNewPolygonGroupIDs);
    void CreateMissingPolygonPerimeterEdges(_Script_MeshDescription::PolygonID PolygonID, void*& OutNewEdgeIDs);
    void CreateMissingPolygonHoleEdges(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, void*& OutNewEdgeIDs);
    void CreateEmptyVertexRange(int32_t NumVerticesToCreate, void*& OutNewVertexIDs);
    void CreateEdges(void*& EdgesToCreate, void*& OutNewEdgeIDs);
    void ComputePolygonTriangulation(_Script_MeshDescription::PolygonID PolygonID, void*& OutTriangles);
    void ComputePolygonsSharedEdges(void*& PolygonIDs, void*& OutSharedEdgeIDs);
    _Script_CoreUObject::Plane ComputePolygonPlane(_Script_MeshDescription::PolygonID PolygonID);
    _Script_CoreUObject::Vector ComputePolygonNormal(_Script_MeshDescription::PolygonID PolygonID);
    _Script_CoreUObject::Vector ComputePolygonCenter(_Script_MeshDescription::PolygonID PolygonID);
    _Script_CoreUObject::BoxSphereBounds ComputeBoundingBoxAndSphere();
    _Script_CoreUObject::Box ComputeBoundingBox();
    bool ComputeBarycentricWeightForPointOnPolygon(_Script_MeshDescription::PolygonID PolygonID, _Script_CoreUObject::Vector PointOnPolygon, _Script_MeshDescription::MeshTriangle& OutTriangle, _Script_CoreUObject::Vector& OutTriangleVertexWeights);
    _Script_EditableMesh::EditableMesh* CommitInstance(_Script_Engine::PrimitiveComponent* ComponentToInstanceTo);
    void Commit();
    void ChangePolygonsVertexInstances(void*& VertexInstancesForPolygons);
    void BevelPolygons(void*& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, void*& OutNewCenterPolygonIDs, void*& OutNewSidePolygonIDs);
    void AssignPolygonsToPolygonGroups(void*& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups);
    bool AnyChangesToUndo();
}; // Size: 0x620
#pragma pack(pop)
}
