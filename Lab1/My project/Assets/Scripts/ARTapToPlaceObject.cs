using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]

public class ARTapToPlaceObject : MonoBehaviour
{
    public GameObject gameObjectToInstantiate;
    private GameObject spwanedObject;
    private ARRaycastManager _arRaycastManager;
    private Vector2 touchposition;

    static List<ARRaycastHit> hits= new List<ARRaycastHit>();

    private void Awake(){
        _arRaycastManager=GetComponent<ARRaycastManager>();
    }

    bool TryGetTouchPosition(out Vector2 touchPosition){
        if(Input.touchCount > 0){
            touchPosition=Input.GetTouch(0).position;
            return true;
        }

        touchPosition=default;
        return false;
    }
    // Update is called once per frame
    void Update()
    {
        if(!TryGetTouchPosition(out Vector2 touchPosition))
            return;
        if(_arRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon)){
            var hitPose=hits[0].pose;

            if (spwanedObject == null){
                spwanedObject=Instantiate(gameObjectToInstantiate, new Vector3(hitPose.position.x, hitPose.position.y-30, hitPose.position.z), hitPose.rotation);
            }
            else{
                spwanedObject.transform.position=hitPose.position;
            }
        }

    }
}
