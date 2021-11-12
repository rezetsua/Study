
(cl:in-package :asdf)

(defsystem "service_generator-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "DinoFactGenerator" :depends-on ("_package_DinoFactGenerator"))
    (:file "_package_DinoFactGenerator" :depends-on ("_package"))
  ))