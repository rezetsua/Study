;; Auto-generated. Do not edit!


(when (boundp 'service_generator::DinoFactGenerator)
  (if (not (find-package "SERVICE_GENERATOR"))
    (make-package "SERVICE_GENERATOR"))
  (shadow 'DinoFactGenerator (find-package "SERVICE_GENERATOR")))
(unless (find-package "SERVICE_GENERATOR::DINOFACTGENERATOR")
  (make-package "SERVICE_GENERATOR::DINOFACTGENERATOR"))
(unless (find-package "SERVICE_GENERATOR::DINOFACTGENERATORREQUEST")
  (make-package "SERVICE_GENERATOR::DINOFACTGENERATORREQUEST"))
(unless (find-package "SERVICE_GENERATOR::DINOFACTGENERATORRESPONSE")
  (make-package "SERVICE_GENERATOR::DINOFACTGENERATORRESPONSE"))

(in-package "ROS")





(defclass service_generator::DinoFactGeneratorRequest
  :super ros::object
  :slots (_user_word ))

(defmethod service_generator::DinoFactGeneratorRequest
  (:init
   (&key
    ((:user_word __user_word) "")
    )
   (send-super :init)
   (setq _user_word (string __user_word))
   self)
  (:user_word
   (&optional __user_word)
   (if __user_word (setq _user_word __user_word)) _user_word)
  (:serialization-length
   ()
   (+
    ;; string _user_word
    4 (length _user_word)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _user_word
       (write-long (length _user_word) s) (princ _user_word s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _user_word
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _user_word (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass service_generator::DinoFactGeneratorResponse
  :super ros::object
  :slots (_dino_fact ))

(defmethod service_generator::DinoFactGeneratorResponse
  (:init
   (&key
    ((:dino_fact __dino_fact) "")
    )
   (send-super :init)
   (setq _dino_fact (string __dino_fact))
   self)
  (:dino_fact
   (&optional __dino_fact)
   (if __dino_fact (setq _dino_fact __dino_fact)) _dino_fact)
  (:serialization-length
   ()
   (+
    ;; string _dino_fact
    4 (length _dino_fact)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _dino_fact
       (write-long (length _dino_fact) s) (princ _dino_fact s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _dino_fact
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _dino_fact (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass service_generator::DinoFactGenerator
  :super ros::object
  :slots ())

(setf (get service_generator::DinoFactGenerator :md5sum-) "45c86d5d7dfcd02fa17ec95f669893aa")
(setf (get service_generator::DinoFactGenerator :datatype-) "service_generator/DinoFactGenerator")
(setf (get service_generator::DinoFactGenerator :request) service_generator::DinoFactGeneratorRequest)
(setf (get service_generator::DinoFactGenerator :response) service_generator::DinoFactGeneratorResponse)

(defmethod service_generator::DinoFactGeneratorRequest
  (:response () (instance service_generator::DinoFactGeneratorResponse :init)))

(setf (get service_generator::DinoFactGeneratorRequest :md5sum-) "45c86d5d7dfcd02fa17ec95f669893aa")
(setf (get service_generator::DinoFactGeneratorRequest :datatype-) "service_generator/DinoFactGeneratorRequest")
(setf (get service_generator::DinoFactGeneratorRequest :definition-)
      "string user_word
---
string dino_fact

")

(setf (get service_generator::DinoFactGeneratorResponse :md5sum-) "45c86d5d7dfcd02fa17ec95f669893aa")
(setf (get service_generator::DinoFactGeneratorResponse :datatype-) "service_generator/DinoFactGeneratorResponse")
(setf (get service_generator::DinoFactGeneratorResponse :definition-)
      "string user_word
---
string dino_fact

")



(provide :service_generator/DinoFactGenerator "45c86d5d7dfcd02fa17ec95f669893aa")


