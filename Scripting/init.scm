
(define (hest)
  (print "Hello World from gambit!\n"))

(c-define-type Event "Event")

(c-define (oe-init) () void "oe_init" ""
          (hest))
